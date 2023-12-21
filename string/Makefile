# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/12/18 20:12:59 by hadrien           #+#    #+#             #
#   Updated: 2023/12/21 19:26:30 by hadrien          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

#Sub-makefile for the string library of the hlibc

CFLAGS += -I ../include/

DIR = string
SRC = h_strcat.c \
	h_strcmp.c \
	h_strcpy.c \
	h_strdup.c \
	h_strlen.c \
	h_strncat.c \
	h_strncpy.c \
	h_strndup.c \
	h_strstr.c \
	h_memccpy.c \
	h_memchr.c \
	h_memcmp.c \
	h_memcpy.c \
	h_memmove.c \
	h_memset.c
OBJ = $(SRC:.c=.o)

all: $(OBJ)
	echo $(addprefix $(DIR)/,$(OBJ)) > $(TEMP_FILE)

clean:
	rm -rf $(OBJ) $(TEMP_FILE)

re: clean all
