# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 14:16:01 by elilliu           #+#    #+#              #
#    Updated: 2024/01/16 14:57:01 by elilliu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_DIR = libft

LIBFT_PATH = libft/libft.a

NAME = push_swap

BONUS_NAME = checker

SRCS = push_swap.c init_stack_b.c get_cost.c index_stack_a.c index_stack_b.c \
		is_opti.c position_to_median.c push_to_a.c push_to_b.c fix_a.c verif_args.c \
		sort_stack_3.c sort_stack.c instructions/push.c instructions/rotate.c instructions/rrotate.c \
		instructions/shift_down.c instructions/shift_up.c instructions/swap.c \
		is_sorted.c

BONUS = bonus/checker.c bonus/init_stack_b_bonus.c bonus/verif_args_bonus.c \
		bonus/read_commands.c bonus/verif_stack_a.c bonus/instructions_bonus/push_bonus.c \
		bonus/instructions_bonus/rotate_bonus.c bonus/instructions_bonus/rrotate_bonus.c \
		bonus/instructions_bonus/shift_down_bonus.c bonus/instructions_bonus/shift_up_bonus.c \
		bonus/instructions_bonus/swap_bonus.c gnl/get_next_line.c gnl/get_next_line_utils.c

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS} ${LIBFT_PATH}
		cc ${CFLAGS} ${OBJS} -o $@ -L${LIBFT_DIR} -lft

${BONUS_NAME}: ${OBJSBONUS} ${LIBFT_PATH}
		cc ${CFLAGS} ${OBJSBONUS} -o $@ -L${LIBFT_DIR} -lft

${LIBFT_PATH}:
		${MAKE} -C ${LIBFT_DIR}

all: ${NAME}

bonus: ${BONUS_NAME}

clean:
		${MAKE} -C ${LIBFT_DIR} clean
		rm -f ${OBJS} ${OBJSBONUS}

fclean: clean;
		${MAKE} -C ${LIBFT_DIR} fclean
		rm -f ${NAME} ${BONUS_NAME}

re: fclean all

.PHONY: all clean fclean re bonus
