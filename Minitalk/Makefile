# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 20:14:19 by healexan          #+#    #+#              #
#    Updated: 2023/03/03 17:23:41 by healexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME_SERVER = server
NAME_SERVER_BONUS = server_bonus
NAME_CLIENT = client
NAME_CLIENT_BONUS = client_bonus
LIBFT = ./libft/libft.a

SRC_SERVER = src/server.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)

SRC_CLIENT = src/client.c
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

SRC_SERVER_BONUS = bonus/server_bonus.c
OBJ_SERVER_BONUS = $(SRC_SERVER_BONUS:.c=.o)

SRC_CLIENT_BONUS = bonus/client_bonus.c
OBJ_CLIENT_BONUS = $(SRC_CLIENT_BONUS:.c=.o)

all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(OBJ_SERVER)
	$(MAKE) --no-print-directory -C ./libft
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFT) -o $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT)
	$(MAKE) --no-print-directory -C ./libft
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFT) -o $(NAME_CLIENT)

bonus: $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)

$(NAME_SERVER_BONUS): $(OBJ_SERVER_BONUS)
	$(MAKE) --no-print-directory -C ./libft
	$(CC) $(CFLAGS) $(OBJ_SERVER_BONUS) $(LIBFT) -o $(NAME_SERVER_BONUS)

$(NAME_CLIENT_BONUS): $(OBJ_CLIENT_BONUS)
	$(MAKE) --no-print-directory -C ./libft
	$(CC) $(CFLAGS) $(OBJ_CLIENT_BONUS) $(LIBFT) -o $(NAME_CLIENT_BONUS)

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_SERVER_BONUS) $(OBJ_CLIENT_BONUS)


fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME_SERVER) $(NAME_CLIENT) $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)


re: fclean all
