/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:55:46 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:56:10 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	message[] = "Hello 42!";

	printf("Before: %s\n", message);
	ft_strupcase(message);
	printf("After:  %s\n", message); // should print: HELLO 42!
	return (0);
}
*/