/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:30:17 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:31:33 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_index(char c, char *base)
{
	int	i = 0;

	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;
	int	b_len;
	int	digit;

	if (!is_valid_base(base))
		return (0);
	b_len = ft_strlen(base);

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((digit = base_index(str[i], base)) != -1)
	{
		result = result * b_len + digit;
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("101010", "01"));                // 42
	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));      // 42
	printf("%d\n", ft_atoi_base("   ---+--+2Axyz", "0123456789ABCDEF")); // -42
	printf("%d\n", ft_atoi_base("poney", "poneyvif"));           // 9801
	printf("%d\n", ft_atoi_base("123", "0"));                    // 0 (invalid base)
	return (0);
}
*/
