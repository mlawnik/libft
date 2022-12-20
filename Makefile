# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbui-quo <tbui-quo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 13:08:00 by tbui-quo          #+#    #+#              #
#    Updated: 2022/12/19 13:04:43 by tbui-quo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c

OBJS = ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_tolower.o ft_toupper.o

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all:	${NAME}
	make clean

${NAME}: ${OBJS}
		${CC} ${CFLAGS} -c ${SRC}
		ar rcs ${NAME} ${OBJS}


clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re
