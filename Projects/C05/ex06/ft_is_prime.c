/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:39:16 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:43:27 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(-5));  // 0
	printf("%d\n", ft_is_prime(0));   // 0
	printf("%d\n", ft_is_prime(1));   // 0
	printf("%d\n", ft_is_prime(2));   // 1
	printf("%d\n", ft_is_prime(3));   // 1
	printf("%d\n", ft_is_prime(4));   // 0
	printf("%d\n", ft_is_prime(17));  // 1
	printf("%d\n", ft_is_prime(18));  // 0
	return (0);
}
*/
