#Sub-makefile for the string library of the hlibc

LDFLAGS = -I ./h_ctype.h

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

clean:
	rm -rf $(OBJ) $(TEMP_FILE)

re: clean all
