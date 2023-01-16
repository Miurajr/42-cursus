# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 14:50:12 by healexan          #+#    #+#              #
#    Updated: 2023/01/16 14:37:03 by healexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libft.a
SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strlcpy.c \
	  ft_strjoin.c \
	  ft_strncmp.c \
	  ft_strdup.c \
	  ft_strlen.c \
	  ft_strnstr.c \
	  ft_split.c \
	  ft_strtrim.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_substr.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strrchr.c \
	  ft_tolower.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_uitoa.c \
	  ft_uputnbr_pf.c \
	  ft_putnbr_pf.c \
	  ft_putstr_pf.c \
	  ft_putchar_pf.c \
	  ft_toupper.c
	  
BONUS = ft_lstadd_front.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c 
		
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"
%.o: %.c
	@cc $(FLAG) -c $< -o $@
clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo "OBJ deleted"
fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"
re: fclean all
bonus:	$(OBJ)	$(BONUS_OBJ)
		@ar rc $(NAME) $(OBJ)	$(BONUS_OBJ)
		@echo "$(NAME) with bonus created"
		@ranlib $(NAME)
		@echo "$(NAME) with bonus indexed"
.PHONY: all, clean, fclean, re, bonus