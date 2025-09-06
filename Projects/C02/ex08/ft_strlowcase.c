/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:56:26 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:56:47 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ft_strlowcase.c

char	*ft_strlowcase(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
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
	ft_strlowcase(message);
	printf("After:  %s\n", message); // should print: hello 42!
	return (0);
}
*/
