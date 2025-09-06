/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strs_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 03:18:06 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 03:25:57 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	struct s_stock_str	*arr;

	arr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
			return (NULL);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

/*
#include <stdio.h>

int	main(void)
{
	char *av[] = {"Hello", "World", "42"};
	struct s_stock_str *tab = ft_strs_to_tab(3, av);
	for (int i = 0; i < 3; i++)
		printf("%d %s %s\n", tab[i].size, tab[i].str, tab[i].copy);
	return (0);
}
*/
