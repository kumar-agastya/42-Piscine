/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:20:19 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:21:10 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World!";
	char	to_find[] = "World";

	char *res = ft_strstr(str, to_find);
	if (res)
		printf("Found: %s\n", res); // Should print: World!
	else
		printf("Not found\n");

	char	to_find2[] = "42";
	res = ft_strstr(str, to_find2);
	if (res)
		printf("Found: %s\n", res);
	else
		printf("Not found\n"); // Should print: Not found

	char	to_find3[] = "";
	res = ft_strstr(str, to_find3);
	if (res)
		printf("Found empty: %s\n", res); // Should print the full str
	return (0);
}
*/