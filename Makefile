#
# user, checker, subject of function
OUT0 = outputs/ft_printf.out
OUT1 = outputs/printf.out
OUT0_BONUS = outputs/ft_printf_bonus.out
OUT1_BONUS = outputs/printf_bonus.out

RES0 = outputs/res_ft_printf.txt
RES1 = outputs/res_printf.txt
RES0_BONUS = outputs/res_ft_printf_bonus.txt
RES1_BONUS = outputs/res_printf_bonus.txt

RES_DIFF = outputs/diff.txt
RES_DIFF_BONUS = outputs/diff_bonus.txt

PATH_LIB = $(shell cd .. && pwd)
LIB = $(PATH_LIB)/libftprintf.a

SRC = test_base.c
SRC_BONUS = test_bonus.c

CC = cc
CFLAGS = -g -I$(PATH_LIB)

#################

all: $(RES_DIFF)
	cat $(RES_DIFF)

bonus: $(RES_DIFF_BONUS)
	cat $(RES_DIFF) $(RES_DIFF_BONUS)

$(RES_DIFF): $(RES0) $(RES1)
	diff -a $(RES0) $(RES1) > $(RES_DIFF) || true

$(RES_DIFF_BONUS): $(RES_DIFF) $(RES0_BONUS) $(RES1_BONUS)
	diff -a $(RES0_BONUS) $(RES1_BONUS) > $(RES_DIFF_BONUS) || true

$(RES0): $(OUT0)
	./$(OUT0) > $(RES0)

$(RES1): $(OUT1)
	./$(OUT1) > $(RES1)

$(RES0_BONUS): $(OUT0_BONUS)
	./$(OUT0_BONUS) > $(RES0_BONUS)

$(RES1_BONUS): $(OUT1_BONUS)
	./$(OUT1_BONUS) > $(RES1_BONUS)

$(OUT0): $(SRC) Makefile $(LIB)
	$(CC) -Wall -Werror -Wextra $(CFLAGS) -D FUN=ft_printf -o $@ $(SRC) $(LIB)

$(OUT1): $(SRC) Makefile $(LIB)
	$(CC) -w $(CFLAGS) -D FUN=printf -o $@ $(SRC) $(LIB)

$(OUT0_BONUS): $(SRC_BONUS) Makefile $(LIB)
	$(CC) -Wall -Werror -Wextra $(CFLAGS) -D FUN=ft_printf -o $@ $(SRC_BONUS) $(LIB)

$(OUT1_BONUS): $(SRC_BONUS) Makefile $(LIB)
	$(CC) -w $(CFLAGS) -D FUN=printf -o $@ $(SRC_BONUS) $(LIB)

clean:
	rm -f $(OUT0) $(OUT1) $(OUT0_BONUS) $(OUT1_BONUS)
fclean: clean
	rm -f $(RES_DIFF) $(RES_DIFF_BONUS) $(RES0) $(RES1) $(RES0_BONUS) $(RES1_BONUS)

	
.PHONY: all bonus clean fclean
