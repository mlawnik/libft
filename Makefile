# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 14:46:51 by mlawnik           #+#    #+#              #
#    Updated: 2022/12/20 17:00:38 by mlawnik          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c

OBJS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlen.o ft_bzero.o ft_memcpy.o

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