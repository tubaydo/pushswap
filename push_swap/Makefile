# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 02:56:23 by tubaaydogan       #+#    #+#              #
#    Updated: 2023/02/24 18:09:23 by tubaaydogan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
SRC = Libft/ft_atoi.c Libft/ft_isdigit.c Libft/ft_itoa.c\
	Libft/ft_lstadd_back.c Libft/ft_lstadd_front.c Libft/ft_lstdelone.c\
	Libft/ft_lstlast.c Libft/ft_lstnew.c Libft/ft_lstsize.c\
	Libft/ft_memchr.c Libft/ft_memcmp.c Libft/ft_memcpy.c\
	Libft/ft_memmove.c Libft/ft_memset.c Libft/ft_strjoin.c \
	Libft/ft_split.c Libft/ft_strchr.c Libft/ft_strdup.c\
	Libft/ft_strncmp.c Libft/ft_strnstr.c Libft/ft_strrchr.c\
	Libft/ft_strtrim.c Libft/ft_substr.c Libft/ft_strlen.c \
	src/checker.c src/push_swap.c
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJ = $(SRC:.c=.o)

all: $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean