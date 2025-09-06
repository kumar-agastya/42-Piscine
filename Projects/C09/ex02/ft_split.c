/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 03:33:24 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 03:33:26 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int	ft_word_len(char *str, char *charset)
{
	int	len = 0;
	while (str[len] && !ft_is_sep(str[len], charset))
		len++;
	return (len);
}

int	ft_count_words(char *str, char *charset)
{
	int	count = 0;
	int	i = 0;

	while (str[i])
	{
		if (!ft_is_sep(str[i], charset))
		{
			count++;
			while (str[i] && !ft_is_sep(str[i], charset))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_strndup(char *str, int n)
{
	char	*dup = (char *)malloc(sizeof(char) * (n + 1));
	int		i = 0;

	if (!dup)
		return (NULL);
	while (i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		i = 0;
	int		j = 0;
	int		word_count = ft_count_words(str, charset);
	char	**tab = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (!tab)
		return (NULL);
	while (str[i])
	{
		if (!ft_is_sep(str[i], charset))
		{
			int len = ft_word_len(str + i, charset);
			tab[j++] = ft_strndup(str + i, len);
			i += len;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	char **res = ft_split("hello,42world!test", ",!"); // separators: ',' and '!'
	for (int i = 0; res[i]; i++)
	{
		printf("word[%d]: %s\n", i, res[i]);
		free(res[i]);
	}
	free(res);
	return (0);
}
*/
