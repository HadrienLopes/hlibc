# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/12/18 20:13:13 by hadrien           #+#    #+#             #
#   Updated: 2023/12/20 18:34:46 by hadrien          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

#Sub-makefile for the ctype library of the hlibc

CFLAGS += -I ../include/

TEST = test_ctype
TEST_DIR = ./test
TEST_SRC = tst-ctype.c

DIR = ctype
SRC = h_isalnum.c \
	h_isalpha.c \
	h_isascii.c \
	h_isdigit.c \
	h_isprint.c \
	h_tolower.c \
	h_toupper.c
OBJ = $(SRC:.c=.o)

all: $(OBJ)
	echo $(addprefix $(DIR)/,$(OBJ)) > $(TEMP_FILE)

check: $(OBJ)
	gcc $(CFLAGS) $(TEST_DIR)/$(TEST_SRC) $^ -o $(TEST)
	./$(TEST)
	rm -f $(TEST)

clean:
	rm -f $(OBJ) $(TEMP_FILE) $(TEST)

re: clean all
