/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:19:39 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:20:03 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i = 0;
	unsigned int	j = 0;

	// Find the end of dest
	while (dest[i] != '\0')
		i++;

	// Append at most nb characters from src
	while (src[j] != '\0' && j < nb)
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
	ft_strncat(dest, src, 3); // append only first 3 characters of src
	printf("After:  %s\n", dest); // Should print: Hello Wor
	return (0);
}
*/
