# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 03:31:07 by agastyakuma       #+#    #+#              #
#    Updated: 2025/09/06 03:31:10 by agastyakuma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

# Compile all C files into object files
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Create static library libft.a from object files
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Index the library
ranlib libft.a
