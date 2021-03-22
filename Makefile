# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 14:58:45 by cregazzo          #+#    #+#              #
#    Updated: 2021/03/22 11:42:39 by cregazzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	display_char.c \
		display_hexa.c \
		display_number.c \
		display_percent.c \
 		display_pointer.c \
 		display_string.c\
		format.c \
		ft_printf.c \
		ft_printf_utils.c \
		print.c


OBJS = ${SRCS:.c=.o}

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror


.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
			ar rcs ${NAME} ${OBJS}

all:	${NAME}

bonus: all

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY : all clean fclean re
