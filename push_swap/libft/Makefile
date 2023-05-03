# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 13:47:28 by okirca            #+#    #+#              #
#    Updated: 2023/05/03 09:42:20 by tubaaydogan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_atoi.c  ft_isdigit.c  ft_itoa.c\
	 ft_memchr.c  ft_memcmp.c  ft_memcpy.c\
	 ft_memmove.c  ft_memset.c  ft_strjoin.c \
	 ft_split.c  ft_strchr.c  ft_strdup.c\
	 ft_strncmp.c  ft_strnstr.c  ft_strrchr.c\
	 ft_strtrim.c  ft_substr.c  ft_strlen.c ft_isalpha.c \

.SILENT:

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror  -g -I. 

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

.re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
