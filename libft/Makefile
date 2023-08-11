# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 13:43:30 by folim             #+#    #+#              #
#    Updated: 2023/05/03 20:56:39 by folim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_memchr.c ft_memcmp.c\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

CFILES_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJF = $(CFILES:.c=.o) #list copying name.c to name.o
OBJF_B = $(CFILES_B:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJF)
	ar rcs $(NAME) $(OBJF)

bonus: $(OBJF) $(OBJF_B)
	ar rcs $(NAME) $(OBJF) $(OBJF_B)

clean:
	rm -rf $(OBJF) $(OBJF_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all

#.PHONY to make sure that gnu make will still run even if files called; clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
