/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:03:46 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:12:17 by agastyakuma      ###   ########.fr       */
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

void	ft_print_addr(unsigned long addr)
{
	char	*hex = "0123456789abcdef";
	int		i;

	i = (sizeof(void *) * 2) - 1;
	while (i >= 0)
	{
		ft_putchar(hex[(addr >> (i * 4)) & 0xF]);
		i--;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	ft_print_line(unsigned char *ptr, unsigned int size, unsigned long addr)
{
	unsigned int	i;

	ft_print_addr(addr);
	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_print_hex(ptr[i]);
		else
			write(1, "  ", 2);
		if (i % 2)
			ft_putchar(' ');
		i++;
	}
	i = 0;
	while (i < size)
	{
		ft_putchar((ptr[i] >= 32 && ptr[i] <= 126) ? ptr[i] : '.');
		i++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		unsigned int line_size = (size - i > 16) ? 16 : size - i;
		ft_print_line(ptr + i, line_size, (unsigned long)(ptr + i));
		i += line_size;
	}
	return (addr);
}

/* Test code (commented for submission)
#include <stdio.h>
int	main(void)
{
	char	message[] = "Hello World!\nThis is a test for print_memory.";
	ft_print_memory(message, sizeof(message) - 1);
	return (0);
}
*/
