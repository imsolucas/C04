/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:11:13 by djin              #+#    #+#             */
/*   Updated: 2023/07/08 15:44:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this ft_atoi is different from the real ft_atoi. But basically ft_atoi is to convert
// from anything into integers. But in this case is string to integers.
// We will use "---+--+1234ab567" as an example.

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	num;
	int	result;
	int	i;

	i = 0;
	result = 0;
	count = 0;
	num = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13)) // this is to scan if there's any tabs if it has we will skip it
		i++;
	while (str[i] == '-' || str[i] == '+') //for this one it will run a while loop function if it scans '-' or '+'
	{
		if (str[i] == '-') //in here we're going to count the value of '-'. If you found a negative sign we'll count it. Else we'll skip it.
			count++;
		i++;
	}
	if (count %2 != 0) // this is the count value that we count just now. usually when we modulus things it will get back 0 but if it didn't we'll make sure to make 'num' = -1
		num = -1;
	while (str[i] >= '0' && str[i] <= '9') // this loop is to convert from string into integers
	{
		result = (result * 10) + (str[i] - '0'); 
		i++;
	}
	return (result * num); //when we return it we return results multiply by num which is either 1 or -1
}

int	main()
{
	char	string[] = "---+--+1234ab567";
	
	ft_atoi(string);
	printf("%d\n", ft_atoi(string));
}
