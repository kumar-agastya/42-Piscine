/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 03:05:20 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 03:06:46 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*array;
	int	i;

	array = ft_range(5, 10);
	for (i = 0; i < 5; i++)
		printf("%d ", array[i]);
	printf("\n");
	free(array);
	return (0);
}
*/
