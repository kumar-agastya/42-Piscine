/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:27:09 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:27:49 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n = nb; // Use long to handle INT_MIN

	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr(42);       // Outputs: 42
	ft_putchar('\n');
	ft_putnbr(-42);      // Outputs: -42
	ft_putchar('\n');
	ft_putnbr(0);        // Outputs: 0
	ft_putchar('\n');
	ft_putnbr(2147483647);  // INT_MAX
	ft_putchar('\n');
	ft_putnbr(-2147483648); // INT_MIN
	ft_putchar('\n');
	return (0);
}
*/
