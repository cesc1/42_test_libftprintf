#
NAME_USER = user.out
NAME_CHECKER = checker.out

PATH_LIB = $(shell cd .. && pwd)
PATH_LIBFT = $(PATH_LIB)/libft
LIB = $(PATH_LIB)/libftprintf.a
LIBFT = $(PATH_LIBFT)/libft.a

USER = test_user.c
CHECKER = test_checker.c

CC = cc
CFLAGS = -g -I$(PATH_LIB) -I$(PATH_LIBFT)

#################

all: $(NAME_USER) $(NAME_CHECKER)
	./$(NAME_USER) > res_user.txt
	./$(NAME_CHECKER) > res_checker.txt
	diff res_user.txt res_checker.txt


$(NAME_USER): $(USER) Makefile $(LIB)
	$(CC) -Wall -Werror -Wextra $(CFLAGS) -o $@ $(USER) $(LIB) $(LIBFT)

$(NAME_CHECKER): $(USER) Makefile $(LIB)
	$(CC) $(CFLAGS) -o $@ $(CHECKER)

clean:
	rm -f $(NAME_USER) $(NAME_CHECKER) res_user.txt res_checker.txt
.PHONY: all clean
