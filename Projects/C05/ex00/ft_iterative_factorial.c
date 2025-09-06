/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:45:32 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:46:49 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);

	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));  // 1
	printf("%d\n", ft_iterative_factorial(1));  // 1
	printf("%d\n", ft_iterative_factorial(5));  // 120
	printf("%d\n", ft_iterative_factorial(-3)); // 0
	printf("%d\n", ft_iterative_factorial(12)); // 479001600
	return (0);
}
*/