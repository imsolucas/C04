/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:37:13 by djin              #+#    #+#             */
/*   Updated: 2023/07/07 18:34:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//INT_MIN is max number for the smallest value which is -2147483648
// Another thing you should know is buffer array.
// A buffer array is like your local array which can only implement in the function that you declare
// if you try calling it to another function that it's not in your main function you'll get an error
 
#include <unistd.h>

//checks for 0 or negative
void	check_nb(int *nb)
{
		if (*nb == 0)
			write (1, "0", 1);
		if (*nb < 0)
		{
			(*nb) *= -1;
			write (1, "-", 1);
		}
}

void	ft_putnbr(int nb)
{
	char	arr[12]; //buffer array
	long	i;

	i = 0;
	if (nb)
	{
		check_nb(&nb);
		if (nb == -2147483648) //checks if number is equal to INT_MIN
		{
			write (1, "2147483648", 10); // write 2147483648 only because my check_nb function has already check for '-' value
			return ; //straight away return NULL to close the string. Then the function ends
		}
		while (nb != 0) //this is to print out the number that is not 0, negative or INT_MIN
		{
			arr[i++] = nb % 10 + '0'; //stores my number into a string by modulos
			nb /= 10; // then move to the next number.
		}
		while (--i) //reverse printing number
		{
			write (1, &arr[i], 1);
		}
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
