# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 15:28:52 by daykim            #+#    #+#              #
#    Updated: 2022/07/12 15:28:52 by daykim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT_DIR = ./libft
LIBFLAGS = -L $(LIBFT_DIR) -lft

SRCS = push_swap.c stack/parsing.c stack/make_stack.c stack/exception.c\
		operation/push.c operation/rotate.c operation/rrotate.c operation/swap.c\
		sorting/sort.c sorting/sort_util.c sorting/three_sort.c sorting/sort_util2.c sorting/find_location.c
OBJS = $(SRCS:.c=.o)

INCFLAGS = -I./ -I./libft

all : $(NAME)

$(NAME) : $(OBJS)
	make --silent --directory=$(LIBFT_DIR)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBFLAGS) $(INCFLAGS)

clean :
	make clean --directory=$(LIBFT_DIR)
	$(RM) $(OBJS)

fclean :clean
	make fclean --directory=$(LIBFT_DIR)
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re