/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:50:07 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/05 07:30:02 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
    char    c;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
}
// int main(void)
// {
//     ft_putnbr(-2147483648);
//     write(1, "\n", 1);
//     ft_putnbr(42);
//     write(1, "\n", 1);
//     ft_putnbr(-42);
//     write(1, "\n", 1);
//     ft_putnbr(0);
//     write(1, "\n", 1);
//     return (0);
// }