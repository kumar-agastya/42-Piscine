/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:39:07 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:46:36 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 0));   // 1
	printf("%d\n", ft_recursive_power(2, 3));   // 8
	printf("%d\n", ft_recursive_power(5, 4));   // 625
	printf("%d\n", ft_recursive_power(0, 0));   // 1
	printf("%d\n", ft_recursive_power(2, -2));  // 0
	return (0);
}
*/