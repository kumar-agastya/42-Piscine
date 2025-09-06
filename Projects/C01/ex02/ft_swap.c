/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:38:20 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:39:06 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int x = 10;
	int y = 20;

	printf("Before: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After:  x = %d, y = %d\n", x, y);
	return (0);
}
*/