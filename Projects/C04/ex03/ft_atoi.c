/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:27:30 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:29:18 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	// Skip whitespaces
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	// Handle multiple + and - signs
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	// Convert digits
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (result * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567")); // -1234
	printf("%d\n", ft_atoi("42"));                // 42
	printf("%d\n", ft_atoi("   +42"));            // 42
	printf("%d\n", ft_atoi("   -42"));            // -42
	printf("%d\n", ft_atoi("+-+--12"));           // -12
	printf("%d\n", ft_atoi("abc123"));            // 0
	return (0);
}
*/
