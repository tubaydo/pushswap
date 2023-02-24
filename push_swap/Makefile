# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 02:56:23 by tubaaydogan       #+#    #+#              #
#    Updated: 2023/02/24 20:22:31 by tubaaydogan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = src/checker.c src/push_swap.c
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : libfts $(OBJ)
	$(CC) $(OBJ) ./Libft/libft.a -o $(NAME)

libfts:
	make -C ./libft

# .gcc : $(OBJ)
# 	$(CC) $(FLAGS) -o $(SRC)
	
clean :
	make clean -C ./libft
	rm -f $(OBJ)

fclean : clean
	make fclean -C ./libft
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean