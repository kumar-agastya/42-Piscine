/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:39:23 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:52:18 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_safe(int *board, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || (board[i] - i) == (row - col) || (board[i] + i) == (row + col))
			return (0);
		i++;
	}
	return (1);
}

int	ft_solve(int *board, int col)
{
	int	row;
	int	count;
	int	i;

	if (col == 10)
	{
		i = 0;
		while (i < 10)
			ft_putchar(board[i++] + '0');
		ft_putchar('\n');
		return (1);
	}
	count = 0;
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(board, col, row))
		{
			board[col] = row;
			count += ft_solve(board, col + 1);
		}
		row++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	i;

	i = 0;
	while (i < 10)
		board[i++] = 0;
	return (ft_solve(board, 0));
}

/*
#include <stdio.h>

int	main(void)
{
	int total = ft_ten_queens_puzzle();
	printf("Total solutions: %d\n", total); // Expected: 724
	return (0);
}
*/

