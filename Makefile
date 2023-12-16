#Master Makefile for the hlibc

export CC = gcc
export CFLAGS = -Wall -Wextra -Werror
export TEMP_FILE = obj_files.tmp
LIB = libhlibc.a
INC = include
SECTION = ctype

all: $(INC) $(LIB)
	rm -f $(TEMP_FILE)

$(INC):
	mkdir $@

$(LIB): $(SECTION)
	ar rcs $@ $(shell cat $(TEMP_FILE))

$(SECTION):
	$(MAKE) -C $@
	cat $@/$(TEMP_FILE) >> $(TEMP_FILE)
	cp $(addprefix $@/h_,$@.h) $(INC)

clean:
	$(foreach dir, $(SECTION), $(MAKE) -C $(dir) clean;)
	rm -f $(TEMP_FILE)

fclean: clean
	rm -rf $(LIB) $(INC)

re: fclean all

.PHONY: all $(LIB) $(SECTION) clean fclean re
