# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 13:25:42 by folim             #+#    #+#              #
#    Updated: 2023/06/07 13:25:44 by folim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3
RCS = ar -rcs
RM = rm -rf
CFILES = $(wildcard ft_*.c)
OBJS = $(CFILES:.c=.o)

# %.o: %.c
# 	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(RCS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: re
	$(CC) $(FLAGS) $(NAME) -o debug.out && ./debug.out

.PHONY: all clean fclean re debug

