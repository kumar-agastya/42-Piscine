/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:47:55 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/05 07:29:57 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
    char	a;
    char	b;
    char	c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a != '7' || b != '8' || c != '9')
                    write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}

// int main(void)
// {
//     ft_print_comb();
//     write(1, "\n", 1);
//     return (0);
// }