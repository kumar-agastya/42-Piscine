/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:16:31 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:16:56 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "Hello")); // 0
	printf("%d\n", ft_strcmp("Hello", "Hellp")); // negative
	printf("%d\n", ft_strcmp("Hellp", "Hello")); // positive
	printf("%d\n", ft_strcmp("", ""));           // 0
	printf("%d\n", ft_strcmp("A", ""));          // positive
	printf("%d\n", ft_strcmp("", "A"));          // negative
	return (0);
}
*/