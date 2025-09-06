/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 03:05:12 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 03:13:51 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base_custom(char *str, char *base);
char	*ft_itoa_base_custom(int nbr, char *base);
int	ft_is_valid_base(char *base);
int	ft_strlen(char *str);
int	ft_index_in_base(char c, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int num;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	num = ft_atoi_base_custom(nbr, base_from);
	return (ft_itoa_base_custom(num, base_to));
}

