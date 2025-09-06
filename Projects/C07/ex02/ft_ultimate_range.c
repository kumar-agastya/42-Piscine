/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 03:05:18 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 03:07:17 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*array;
	int	size;
	int	i;

	size = ft_ultimate_range(&array, 3, 8);
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
	free(array);
	return (0);
}
*/
