/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:46:31 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/05 07:29:55 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}
// int main(void)
// {
//     ft_is_negative(-5);
//     ft_is_negative(0);
//     ft_is_negative(5);
//     write(1, "\n", 1);
//     return (0);
// }