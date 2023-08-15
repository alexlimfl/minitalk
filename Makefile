# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 17:30:18 by folim             #+#    #+#              #
#    Updated: 2023/08/15 17:30:21 by folim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client

LIBFT = libft/*.c
FT_PRINTF = ft_printf/*.c
SERVER_FILES = server.c
CLIENT_FILES = client.c

CC = gcc
FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3
RM = rm -rf
# RCS = ar -rcs

# OBJS_SERVER = (SERVER_FILES:.c=.o)
# OBJS_CLIENT = (CLIENT_FILES:.c=.o)
# OBJS_LIBFT = (LIBFT:.c=.o)
# OBJS_FT_PRINTF = (FT_PRINTF:.c=.o)

all:$(CLIENT) $(SERVER)

$(CLIENT) :
		$(CC) $(CLIENT_FILES) $(LIBFT) $(FT_PRINTF) -o $(CLIENT)

$(SERVER) :
		$(CC) $(SERVER_FILES) $(LIBFT) $(FT_PRINTF) -o $(SERVER)

clean:
		${RM} *.o
		${RM} libft/*.o
		${RM} ft_printf/*.o

fclean: clean
		$(RM) $(CLIENT) $(SERVER)


re: fclean all

.PHONY: all clean fclean re