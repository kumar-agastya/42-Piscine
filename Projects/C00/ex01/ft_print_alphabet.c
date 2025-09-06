/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:35:07 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/05 07:29:47 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
    char	c;

    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}

// int main(void)
// {
//     ft_print_alphabet();
//     write(1, "\n", 1);
//     return (0);
// }
