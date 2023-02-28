# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 20:14:19 by healexan          #+#    #+#              #
#    Updated: 2023/02/27 20:51:02 by healexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME_SERVER = server
NAME_CLIENT = client
LIBFT = ./libft/libft.a

SRC_SERVER = src/server.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)

SRC_CLIENT = src/client.c
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(OBJ_SERVER)
	$(MAKE) --no-print-directory -C ./libft
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFT) -o $(NAME_SERVER)

$(NAME_CLIENT): (OBJ_CLIENT)
	$(MAKE) --no-print-directory -c ./libft
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFT) -o $(NAME_CLIENT)

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJ_SERVER)


fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME_SERVER)


re: fclean all
