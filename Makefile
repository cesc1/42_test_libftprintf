#
NAME = a.out

PATH_LIB = $(shell cd .. && pwd)
PATH_LIBFT = $(PATH_LIB)/libft
LIB = $(PATH_LIB)/libftprintf.a
LIBFT = $(PATH_LIBFT)/libft.a

SRCS = test_user.c

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I$(PATH_LIB) -I$(PATH_LIBFT)

#################

$(NAME): $(SRCS) $(LIB) $(LIBFT) Makefile
	$(CC) $(CFLAGS) -o $@ $(SRCS) $(LIB) $(LIBFT)
