/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:39:13 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:43:03 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(-4));  // 0
	printf("%d\n", ft_sqrt(0));   // 0
	printf("%d\n", ft_sqrt(1));   // 1
	printf("%d\n", ft_sqrt(4));   // 2
	printf("%d\n", ft_sqrt(9));   // 3
	printf("%d\n", ft_sqrt(10));  // 0
	printf("%d\n", ft_sqrt(16));  // 4
	return (0);
}
*/