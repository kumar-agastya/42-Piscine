/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 03:05:09 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 03:14:32 by agastyakuma      ###   ########.fr       */
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

int	ft_is_valid_base(char *base)
{
	int i, j, len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (j < len)
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}

int	ft_index_in_base(char c, char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
#include <stdlib.h>

int	ft_atoi_base_custom(char *str, char *base)
{
	int sign = 1, num = 0, idx;
	while (*str && (*str <= 32))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	while (*str && (idx = ft_index_in_base(*str, base)) >= 0)
	{
		num = num * ft_strlen(base) + idx;
		str++;
	}
	return (num * sign);
}

char	*ft_itoa_base_custom(int nbr, char *base)
{
	int		len = ft_strlen(base), n = nbr, digits = (nbr <= 0) ? 1 : 0;
	char	*res;
	int		tmp = n;
	while (tmp)
	{
		tmp /= len;
		digits++;
	}
	res = (char *)malloc(digits + 1);
	if (!res)
		return (NULL);
	res[digits] = '\0';
	if (n == 0)
		res[0] = base[0];
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n)
	{
		res[--digits] = base[n % len];
		n /= len;
	}
	return (res);
}
