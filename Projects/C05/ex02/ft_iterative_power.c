/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:39:05 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:46:11 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	result = 1;
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 0));   // 1
	printf("%d\n", ft_iterative_power(2, 3));   // 8
	printf("%d\n", ft_iterative_power(5, 4));   // 625
	printf("%d\n", ft_iterative_power(0, 0));   // 1
	printf("%d\n", ft_iterative_power(2, -2));  // 0
	return (0);
}
*/