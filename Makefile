# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 14:58:45 by cregazzo          #+#    #+#              #
#    Updated: 2021/02/08 14:58:48 by cregazzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c

OBJS = ${SRCS:.c=.o}

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

LIBFT=		libft.a

LIBDIR=		libft

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
			make -C ${LIBDIR}
			cp ${LIBDIR}/${LIBFT} ${NAME}
			ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		make fclean -C ${LIBDIR}
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY : all clean fclean re