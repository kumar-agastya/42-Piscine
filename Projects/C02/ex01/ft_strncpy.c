/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:48:30 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:18:02 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ft_strncpy.c

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello 42!";
	char	dest[20];

	ft_strncpy(dest, src, 8); // copy first 8 characters
	printf("Source: %s\n", src);
	printf("Dest:   %s\n", dest); // should print: Hello 4
	return (0);
}
*/
