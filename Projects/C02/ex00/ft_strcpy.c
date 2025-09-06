/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:47:47 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:17:55 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // null-terminate dest
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello 42!";
	char	dest[50];

	ft_strcpy(dest, src);
	printf("Source: %s\n", src);
	printf("Dest:   %s\n", dest); // should print: Hello 42!
	return (0);
}
*/