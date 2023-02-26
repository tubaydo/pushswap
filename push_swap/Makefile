# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 02:56:23 by tubaaydogan       #+#    #+#              #
#    Updated: 2023/02/26 15:41:06 by tubaaydogan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = src/checker.c src/push_swap.c src/sort.c
FLAGS = -Wall -Wextra -Werror -g
CC = gcc
OBJ = $(SRC:.c=.o)

.SILENT:

all: $(NAME) 

$(NAME) : libfts $(OBJ)
	$(CC) $(OBJ) ./Libft/libft.a -o $(NAME)

libfts:
	make -C ./libft
	
clean :
	make clean -C ./libft
	rm -f $(OBJ)

fclean : clean
	make fclean -C ./libft
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean