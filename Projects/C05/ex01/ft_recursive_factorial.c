/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:39:02 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:45:57 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(0));  // 1
	printf("%d\n", ft_recursive_factorial(1));  // 1
	printf("%d\n", ft_recursive_factorial(5));  // 120
	printf("%d\n", ft_recursive_factorial(-3)); // 0
	printf("%d\n", ft_recursive_factorial(12)); // 479001600
	return (0);
}
*/