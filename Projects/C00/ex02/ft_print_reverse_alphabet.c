/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:37:29 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/05 07:29:43 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
    char	c;

    c = 'z';
    while (c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}
// int main(void)
// {
//     ft_print_reverse_alphabet();
//     write(1, "\n", 1);
//     return (0);
// }