/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:11:13 by djin              #+#    #+#             */
/*   Updated: 2023/04/12 21:54:50 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count %2 != 0)
		num = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * num);
}

int	main()
{
	char	string[] = "---+--+1234ab567";
	
	ft_atoi(string);
	printf("%d\n", ft_atoi(string));
}
