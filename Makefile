# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/09 14:15:13 by jnougaro          #+#    #+#              #
#    Updated: 2021/09/22 11:29:53 by jnougaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS	= srcs/main.c \
			srcs/utils.c \
			srcs/init_struct.c \
			srcs/check_args.c \
			srcs/op_swap.c \
			srcs/op_ss.c \
			srcs/op_rotate.c \
			srcs/op_rr.c \
			srcs/op_rrr.c \
			srcs/op_index_ss.c \
			srcs/op_index_rr.c \
			srcs/op_index_rrr.c \
			srcs/algo.c \
			srcs/five_arg.c \
			srcs/four_arg.c \
			srcs/other_arg.c

OBJS	= ${SRCS:.c=.o}

CC 	= clang
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS}
			make -C libft/
			${CC} ${CFLAGS} ${OBJS} -o $(NAME) libft/libft.a

clean:
		${RM} ${OBJS}
		make clean -C libft/
		rm libft/libft.a

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
