/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:40:13 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:40:54 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int	main(void)
{
	int x = 17;
	int y = 5;

	printf("Before: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After:  x (div) = %d, y (mod) = %d\n", x, y);
	// Expected: x = 3, y = 2
	return (0);
}
*/