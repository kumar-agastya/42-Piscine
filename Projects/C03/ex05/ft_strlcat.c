/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:21:44 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:21:52 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len = 0;
	unsigned int	src_len = 0;
	unsigned int	i;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;

	if (size <= dest_len)
		return (size + src_len);

	i = 0;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello ";
	char	src[] = "World!";
	unsigned int ret;

	ret = ft_strlcat(dest, src, sizeof(dest));
	printf("Dest: %s\n", dest); // Should print: Hello World!
	printf("Return: %u\n", ret); // Should print: total length it tried to create

	char	dest2[10] = "12345";
	char	src2[] = "67890";
	ret = ft_strlcat(dest2, src2, 8);
	printf("Dest2: %s\n", dest2); // Should print: 1234567 (truncated)
	printf("Return: %u\n", ret); // Should print: 5+5 = 10
	return (0);
}
*/