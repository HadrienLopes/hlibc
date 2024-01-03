# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/12/18 20:12:59 by hadrien           #+#    #+#             #
#   Updated: 2024/01/03 22:11:18 by hadrien          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

#Sub-makefile for the string library of the hlibc

CFLAGS += -I ../include/

DIR = strings
SRC = h_bzero.c
OBJ = $(SRC:.c=.o)

all: $(OBJ)
	echo $(addprefix $(DIR)/,$(OBJ)) > $(TEMP_FILE)

clean:
	rm -rf $(OBJ) $(TEMP_FILE)

re: clean all
