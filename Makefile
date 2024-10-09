#
# user, checker, subject of function
OUT0 = outputs/a.out
OUT1 = outputs/b.out

PATH_LIB = $(shell cd .. && pwd)
PATH_LIBFT = $(PATH_LIB)/libft
LIB = $(PATH_LIB)/libftprintf.a
LIBFT = $(PATH_LIBFT)/libft.a

SRC = test.c

CC = cc
CFLAGS = -g -I$(PATH_LIB) -I$(PATH_LIBFT)

#################

all: $(OUT0) $(OUT1)
	./$(OUT0) > outputs/res1.txt
	./$(OUT1) > outputs/res2.txt
	diff outputs/res1.txt outputs/res2.txt > outputs/test.diff

$(OUT0): $(SRC) Makefile $(LIB)
	$(CC) -Wall -Werror -Wextra $(CFLAGS) -D FUN=ft_printf -o $@ $(SRC) $(LIB) $(LIBFT)

$(OUT1): $(SRC) Makefile $(LIB)
	$(CC) -w $(CFLAGS) -D FUN=printf -o $@ $(SRC) $(LIB) $(LIBFT)
.PHONY: all
