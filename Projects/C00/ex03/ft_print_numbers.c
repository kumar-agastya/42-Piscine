/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:38:42 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/05 07:29:53 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
    char	c;

    c = '0';
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
}
// int main(void)
// {
//     ft_print_numbers();
//     write(1, "\n", 1);
//     return (0);
// }