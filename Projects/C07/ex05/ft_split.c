/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 03:05:05 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 03:11:33 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *sep)
{
	int i = 0;
	while (sep[i])
		if (sep[i++] == c)
			return (1);
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int count = 0, i = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], sep))
			i++;
		if (str[i] && !ft_is_sep(str[i], sep))
		{
			count++;
			while (str[i] && !ft_is_sep(str[i], sep))
				i++;
		}
	}
	return (count);
}

char	*ft_word_dup(char *str, int start, int end)
{
	char *word = (char *)malloc(end - start + 1);
	int i = 0;
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *sep)
{
	char **res;
	int i = 0, j = 0, k = 0, words = ft_count_words(str, sep);

	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], sep))
			i++;
		j = i;
		while (str[i] && !ft_is_sep(str[i], sep))
			i++;
		if (i > j)
			res[k++] = ft_word_dup(str, j, i);
	}
	res[k] = NULL;
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char **res = ft_split("Hello--42-World", "-");
	int i = 0;
	while (res[i])
		printf("%s\n", res[i++]);
	return (0);
}
*/
