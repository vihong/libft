# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 10:20:12 by vi-hong           #+#    #+#              #
#    Updated: 2016/12/16 11:23:26 by vi-hong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME		= libft.a
SRC			= ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
D_SRC		= src
OBJ			= $(SRC:.c=.o)
D_HEADER	= header

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= -rm -rf


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^
	ranlib $@	

%.o: $(D_SRC)/%.c
	@$(CC) -c -I$(D_HEADER) $(CFLAGS) $^ -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

x: all
	@gcc main.c -lft -L. -I$(D_HEADER) && ./a.out

ff: fclean
	@$(RM) a.out

r:	ff x
