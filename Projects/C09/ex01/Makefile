# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 03:32:29 by agastyakuma       #+#    #+#              #
#    Updated: 2025/09/06 03:32:52 by agastyakuma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INC_DIR = includes
SRCS = $(SRC_DIR)/ft_putchar.c \
       $(SRC_DIR)/ft_swap.c \
       $(SRC_DIR)/ft_putstr.c \
       $(SRC_DIR)/ft_strlen.c \
       $(SRC_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(NAME)

# Create static library
$(NAME): $(OBJS)
	@echo "Creating library $(NAME)..."
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# Compile object files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Remove object files
clean:
	@echo "Cleaning object files..."
	rm -f $(OBJS)

# Remove object files and library
fclean: clean
	@echo "Removing library $(NAME)..."
	rm -f $(NAME)

# Rebuild everything
re: fclean all
