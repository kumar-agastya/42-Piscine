/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:29:32 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 02:33:38 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putnbr_base.c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_valid_base(char *base)
{
	int	i, j;
	int	len = ft_strlen(base);

	if (len < 2)
		return (0);

	i = 0;
	while (i < len)
	{
		// Reject '+' '-' and non-printable or whitespace characters
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	n = nbr;
	int		base_len;

	if (!is_valid_base(base))
		return ;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	ft_putchar(base[n % base_len]);
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(42, "0123456789");         // 42
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789");        // -42
	ft_putchar('\n');
	ft_putnbr_base(42, "01");                  // 101010
	ft_putchar('\n');
	ft_putnbr_base(255, "0123456789ABCDEF");  // FF
	ft_putchar('\n');
	ft_putnbr_base(42, "poneyvif");           // vf
	ft_putchar('\n');
	ft_putnbr_base(42, "0");                  // Invalid base, outputs nothing
	ft_putchar('\n');
	ft_putnbr_base(42, "012 345");            // Invalid base (whitespace), outputs nothing
	ft_putchar('\n');
	return (0);
}
*/

