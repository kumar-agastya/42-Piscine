/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:25:44 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:26:10 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "Hello World!";
	char *s2 = "";
	char *s3 = "42 is cool";

	printf("Length of '%s': %d\n", s1, ft_strlen(s1)); // 12
	printf("Length of '%s': %d\n", s2, ft_strlen(s2)); // 0
	printf("Length of '%s': %d\n", s3, ft_strlen(s3)); // 10
	return (0);
}
*/