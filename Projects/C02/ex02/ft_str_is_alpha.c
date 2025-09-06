/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:49:09 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:49:35 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// ft_str_is_alpha.c

int	ft_str_is_alpha(char *str)
{
	int	i = 0;

	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') ||
		      (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("HelloWorld")); // should print 1
	printf("%d\n", ft_str_is_alpha("Hello42"));    // should print 0
	printf("%d\n", ft_str_is_alpha(""));           // should print 1
	return (0);
}
*/