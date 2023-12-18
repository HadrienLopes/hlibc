# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/12/18 20:12:59 by hadrien           #+#    #+#             #
#   Updated: 2023/12/18 20:15:28 by hadrien          ###   ########.fr       #
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
	h_strstr.c
OBJ = $(SRC:.c=.o)

all: $(OBJ)
	echo $(addprefix $(DIR)/,$(OBJ)) > $(TEMP_FILE)

clean:
	rm -rf $(OBJ) $(TEMP_FILE)

re: clean all
