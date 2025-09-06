/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:39:20 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:43:52 by agastyakuma      ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(-5)); // 2
	printf("%d\n", ft_find_next_prime(0));  // 2
	printf("%d\n", ft_find_next_prime(1));  // 2
	printf("%d\n", ft_find_next_prime(2));  // 2
	printf("%d\n", ft_find_next_prime(14)); // 17
	printf("%d\n", ft_find_next_prime(17)); // 17
	printf("%d\n", ft_find_next_prime(18)); // 19
	return (0);
}
*/