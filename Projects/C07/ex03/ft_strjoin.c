/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 03:05:15 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 03:09:56 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int i, len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

void	ft_copy_str(char *dest, char *src, int *pos)
{
	int i = 0;
	while (src[i])
	{
		dest[*pos] = src[i];
		(*pos)++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *res;
	int total_len, i, k;

	if (size == 0)
	{
		res = (char *)malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	total_len = ft_total_length(size, strs, sep);
	res = (char *)malloc(total_len + 1);
	if (!res)
		return (0);
	i = 0; k = 0;
	while (i < size)
	{
		ft_copy_str(res, strs[i], &k);
		if (i < size - 1)
			ft_copy_str(res, sep, &k);
		i++;
	}
	res[k] = '\0';
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char *words[] = {"Hello", "42", "World"};
	char *joined = ft_strjoin(3, words, "-");
	printf("%s\n", joined); // Hello-42-World
	free(joined);
	return (0);
}
*/
