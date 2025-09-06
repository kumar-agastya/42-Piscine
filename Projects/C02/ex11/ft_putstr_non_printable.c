/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:02:56 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:03:32 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	char	*hex = "0123456789abcdef";

	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_print_hex((unsigned char)str[i]);
		}
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	message[] = "Hello\nHow are you?\t";

	ft_putstr_non_printable(message);
	// Expected output: Hello\0aHow are you?\09
	return (0);
}
*/
