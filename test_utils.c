//
#include "libftprintf.h"
#include <stdlib.h>
#include <stdarg.h>

int	print(int (*f)(const char *, va_list), const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	f(str, args);
	va_end();
}

void	print_test(char user, const char *str, ...)
{
	va_list args;

	int	result;

	va_start(args, str);
	if (user == '0')
		result = ft_printf(str, args); printf(" (%d)\n", result);
	if (user == '1')
		result = printf(str, args); printf(" (%d)\n", result);
	if (user == '2')
		printf("%s\n", str);
	else
		printf("Error\n");
	va_end();
}
