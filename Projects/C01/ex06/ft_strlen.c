/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:42:13 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:42:43 by agastyakuma      ###   ########.fr       */
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
	char *message = "Hello 42!";
	int length;

	length = ft_strlen(message);
	printf("Length of '%s' is %d\n", message, length); // should print 9
	return (0);
}
*/