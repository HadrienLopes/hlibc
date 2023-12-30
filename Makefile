# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/12/18 19:54:01 by hadrien           #+#    #+#             #
#   Updated: 2023/12/30 21:50:54 by hadrien          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

#Master Makefile for the hlibc

export CC = gcc
export CFLAGS = -Wall -Wextra -Werror
export INC = include
export TEMP_FILE = obj_files.tmp
LIB = libhlibc.a
SECTION = ctype \
	string \
	stdlib

all: $(LIB)
	rm -f $(TEMP_FILE)


$(LIB): $(SECTION)
	ar rcs $@ $(shell cat $(TEMP_FILE))

$(SECTION):
	$(MAKE) -C $@
	cat $@/$(TEMP_FILE) >> $(TEMP_FILE)

check:
	$(foreach dir, $(SECTION), $(MAKE) -C $(dir) check;)

clean:
	$(foreach dir, $(SECTION), $(MAKE) -C $(dir) clean;)
	rm -f $(TEMP_FILE)

fclean: clean
	rm -rf $(LIB)

re: fclean all

.PHONY: all $(LIB) $(SECTION) clean fclean re
