/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:39:10 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:42:38 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(-1)); // -1
	printf("%d\n", ft_fibonacci(0));  // 0
	printf("%d\n", ft_fibonacci(1));  // 1
	printf("%d\n", ft_fibonacci(2));  // 1
	printf("%d\n", ft_fibonacci(3));  // 2
	printf("%d\n", ft_fibonacci(4));  // 3
	printf("%d\n", ft_fibonacci(10)); // 55
	return (0);
}
*/