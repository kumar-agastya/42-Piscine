/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:44:14 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:44:32 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ft_sort_int_tab.c

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	arr[] = {5, 2, 8, 1, 3};
	int	size = 5;
	int	i;

	printf("Before: ");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("After:  ");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return (0);
}
*/
