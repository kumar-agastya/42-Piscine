#include <unistd.h>

// Print a single character on the screen
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char get_char(int current_column, int current_row, int total_width, int total_height)
{
    // Top-left corner
    if (current_column == 1 && current_row == 1)
        return 'A';
    // Top-right corner
    if (current_column == total_width && current_row == 1)
        return 'A';
    // Bottom-left corner
    if (current_column == 1 && current_row == total_height)
        return 'C';
    // Bottom-right corner
    if (current_column == total_width && current_row == total_height)
        return 'C';
    // Left or right edges (excluding corners)
    if (current_column == 1 || current_column == total_width)
        return 'B';
    // Top or bottom edges (excluding corners)
    if (current_row == 1 || current_row == total_height)
        return 'B';
    // Inside area
    return ' ';
}

// Main function: draw rectangle with width and height
void	rush(int total_width, int total_height)
{
	int	current_row;
	int	current_column;

	// Handle invalid input (negative, zero, or mixed signs)
	if (total_width <= 0 || total_height <= 0)
	{
		write(1, "Pattern cannot be printed. Please try with valid input.\n", 56);
		return ;
	}
	current_row = 1;
	while (current_row <= total_height)
	{
		current_column = 1;
		while (current_column <= total_width)
		{
			ft_putchar(get_char(current_column, current_row,
						total_width, total_height));
			current_column++;
		}
		ft_putchar('\n');
		current_row++;
	}
}
