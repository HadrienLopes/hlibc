# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/12/27 19:40:34 by hadrien           #+#    #+#             #
#   Updated: 2023/12/27 19:49:34 by hadrien          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libft.a
SRCS =	ft_memset.c \
CC = gcc -Wall -Wextra -Werror
CFLAGS = -I .libft.h
SRCS = h_atoi.c \
	h_ctype_table.c \
	h_isalnum.c \
	h_isalpha.c \
	h_isblank.c \
	h_iscntrl.c \
	h_isdigit.c \
	h_isgraph.c \
	h_islower.c \
	h_isprint.c \
	h_ispunct.c \
	h_isspace.c \
	h_isupper.c \
	h_isxdigit.c \
	h_memccpy.c \
	h_memchr.c \
	h_memcmp.c \
	h_memcpy.c \
	h_memmove.c \
	h_memset.c \
	h_strcat.c \
	h_strchr.c \
	h_strcmp.c \
	h_strcpy.c \
	h_strdup.c \
	h_strlen.c \
	h_strncat.c \
	h_strncpy.c \
	h_strndup.c \
	h_strstr.c \
	h_tolower.c \
	h_toupper.c 
OBJ = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
