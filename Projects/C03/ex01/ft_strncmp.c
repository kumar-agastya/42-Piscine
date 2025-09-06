/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:17:01 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:17:30 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i = 0;

	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "Hello", 5)); // 0
	printf("%d\n", ft_strncmp("Hello", "Hellp", 5)); // negative
	printf("%d\n", ft_strncmp("Hellp", "Hello", 5)); // positive
	printf("%d\n", ft_strncmp("Hello", "Hellp", 4)); // 0 (first 4 chars equal)
	printf("%d\n", ft_strncmp("", "", 1));           // 0
	printf("%d\n", ft_strncmp("A", "", 1));          // positive
	printf("%d\n", ft_strncmp("", "A", 1));          // negative
	printf("%d\n", ft_strncmp("Hello", "Hello", 0)); // 0
	return (0);
}
*/