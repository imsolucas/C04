/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:11:13 by djin              #+#    #+#             */
/*   Updated: 2023/04/12 15:11:46 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	counter;
	int	sign;

	i = 0;
	counter = 0;
	result = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
			i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	if (counter % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (result * sign);
}

/*int	main()
{
	char	string[] = "---+--+1234ab567";
	
	ft_atoi(string);
	printf("%d\n", ft_atoi(string));
}*/
