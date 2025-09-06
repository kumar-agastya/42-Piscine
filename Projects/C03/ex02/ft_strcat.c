/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:19:06 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:19:26 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ft_strcat.c

char	*ft_strcat(char *dest, char *src)
{
	int	i = 0;
	int	j = 0;

	// Find the end of dest
	while (dest[i] != '\0')
		i++;

	// Append src to dest
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; // null-terminate
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[50] = "Hello ";
	char	src[] = "World!";

	printf("Before: %s\n", dest);
	ft_strcat(dest, src);
	printf("After:  %s\n", dest); // Should print: Hello World!
	return (0);
}
*/