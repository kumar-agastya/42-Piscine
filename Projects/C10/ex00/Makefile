# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 03:42:59 by agastyakuma       #+#    #+#              #
#    Updated: 2025/09/06 03:43:07 by agastyakuma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = ./ft_display_file.c

# Objs receives the same values as SRCs only exchanges .c for .o
OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

# defines a rule to compile
# -c $ < -$ {<:. c = .O} specifies how the source file will be generated
# $(NAME): ${OBJS} generates the Library Static from Objs
# ${CC} ${CFLAGS} ${OBJS} -o ${NAME} create the file ft_display_files
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

# When makefile is called without arguments
all:	${NAME}

# defines the rule to clean. Erases the .o files.
clean:
		${RM} ${OBJS}

# Erases the same files of Clean and the ft_display_file
fclean:	clean
		${RM} ${NAME}

# clean all files and create them again
re:		fclean all

# informs MakeFile that whenever these rules are called they need to be executed
.PHONY: all clean fclean re