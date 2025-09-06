/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:01:44 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:02:32 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i = 0;

	// Copy characters until size - 1 or end of src
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0'; // null-terminate
	}

	// Count length of src
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello 42!";
	char	dest[20];
	unsigned int	ret;

	ret = ft_strlcpy(dest, src, 6); // copy up to 5 characters
	printf("Source: %s\n", src);
	printf("Dest:   %s\n", dest); // should print: Hello
	printf("Length returned: %u\n", ret); // should print: 9 (length of src)
	return (0);
}
*/