/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:57:01 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 01:57:40 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i = 0;
	int	new_word = 1;

	while (str[i] != '\0')
	{
		// Check if current character is a letter or digit
		if ((str[i] >= 'a' && str[i] <= 'z') || 
		    (str[i] >= 'A' && str[i] <= 'Z') || 
		    (str[i] >= '0' && str[i] <= '9'))
		{
			if (new_word)
			{
				// Capitalize if letter
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= ('a' - 'A');
				new_word = 0;
			}
			else
			{
				// Make lowercase if letter
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += ('a' - 'A');
			}
		}
		else
		{
			// Non-alphanumeric char: next character starts a new word
			new_word = 1;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	message[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("Before: %s\n", message);
	ft_strcapitalize(message);
	printf("After:  %s\n", message);
	// Expected: "Hi, How Are You? 42words Forty-Two; Fifty+And+One"
	return (0);
}
*/