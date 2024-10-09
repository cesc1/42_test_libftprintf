/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguirre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:57:52 by faguirre          #+#    #+#             */
/*   Updated: 2024/10/09 15:16:16 by faguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_C
# define TEST_C

#include "libftprintf.h"
#include <stdlib.h>
#include <stdarg.h>

int	print(int (*f)(const char *, va_list), const char *str, ...);
void	print_test(char user, const char *str, ...);
#endif

int	main(int argc, char **argv)
{
	char	user;
	int	*ptr = (int *)0x7ffe5f37ba94;

	if (argc != 2)
		return (1);
	user = *(argv[1]);
	if (!(user == '0' || user == '1'|| user == '2'))
		return (1);

	// BASIC TESTS
	print_test(user, "hola test 1");
	print_test(user, NULL);
	print_test(user, "àéí¿¡!");
	print_test(user, "%?--m");

	// %c
	printf("===%%c===");
	print_test(user, ".%c.", 'a');
	print_test(user, ".%c%c.%c%c.", 'a', 'b', 'c', 'd');

	// %s
	printf("===%%s===");
	print_test(user, ".%s.", "hola");
	print_test(user, ".%s %s %s.", "hola", "com", "estas?");

	// %d %i
	printf("===%%d===");
	print_test(user, ".%d.", 5);
	print_test(user, ".%d%i.%d%i.", -5, 5, -2147483648, 2147483647);

	// %u
	printf("===%%u===");
	print_test(user, ".%u.", 5);
	print_test(user, ".%u%u.%u%u.", -5, 5, '0', 4294967295);

	// %x %X
	printf("===%%x===");
	print_test(user, ".%x.", 13);
	print_test(user, ".%x%X.%x%X.", 13, 13, -4, 4294967295);

	// Can't test %p on diferent files, or the files allways
	print_test(user, ".%p.", ptr);
	return (0);
}
