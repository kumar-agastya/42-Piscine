/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:39:24 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:39:57 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 17;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d\n", a, b);
	printf("Division = %d\n", div); // should print 3
	printf("Modulo   = %d\n", mod); // should print 2
	return (0);
}
*/