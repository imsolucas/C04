/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:37:13 by djin              #+#    #+#             */
/*   Updated: 2023/04/12 21:54:25 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	loop(int *nb, char	*arr, char	*n, long *i)
{
	while (*nb != 0)
	{
		*n = *nb % 10 + 48;
		arr[*i] = *n;
		(*i)++;
		*nb = *nb / 10;
	}
	while (*i > 0)
	{
		(*i)--;
		write(1, &arr[*i], 1);
	}
}

void	ft_putnbr(int nb)
{
	char	arr;
	char	n;
	long	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	loop (&nb, &arr, &n, &i);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}
