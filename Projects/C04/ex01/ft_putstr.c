/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:26:22 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:26:56 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putstr("Hello, World!\n");   // Should print: Hello, World!
	ft_putstr("42 Cursus\n");       // Should print: 42 Cursus
	return (0);
}
*/