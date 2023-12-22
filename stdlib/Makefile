# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/12/22 22:34:22 by hadrien           #+#    #+#             #
#   Updated: 2023/12/22 22:35:51 by hadrien          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

#Sub-makefile for the stdlib library of the hlibc

CFLAGS += -I ../include/

DIR = stdlib
SRC = h_atoi.c
OBJ = $(SRC:.c=.o)

all: $(OBJ)
	echo $(addprefix $(DIR)/,$(OBJ)) > $(TEMP_FILE)

clean:
	rm -f $(OBJ) $(TEMP_FILE) $(TEST)

re: clean all
