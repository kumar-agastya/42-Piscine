/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:49:49 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:52:12 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i = 0;

	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("123456")); // should print 1
	printf("%d\n", ft_str_is_numeric("42Hello")); // should print 0
	printf("%d\n", ft_str_is_numeric(""));       // should print 1
	return (0);
}
*/