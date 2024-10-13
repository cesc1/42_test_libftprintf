/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguirre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:57:52 by faguirre          #+#    #+#             */
/*   Updated: 2024/10/10 15:32:51 by faguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stdarg.h>

#ifndef FUN
# define FUN ft_printf
#endif

int	main()
{
	int	*ptr = (int *)0x7ffe5f37ba94;

	// BASIC TESTS
	FUN("TESTS BASIC PRINTF (no cs)\n");
	FUN("--------------------------\n\n");

	FUN("(%d)\n", FUN("hola test 1"));
	FUN("(%d)\n", FUN(NULL));
	FUN("(%d)\n", FUN("àéí¿¡!"));
	FUN("(%d)\n", FUN("%?--m"));

	FUN("\nTESTS WITH %%CONVERSION SPECIFIERS\n");
	FUN("------------------------------------\n");
	// %c
	FUN("\n===%%c===\n");
	FUN("(%d)\n", FUN("1 %c", 'a'));
	FUN("(%d)\n", FUN("2 %c%c %c%c", 'a', 'b', 'c', 'd'));
	FUN("(%d)\n", FUN("3 %c", 200));
	FUN("(%d)\n", FUN("4 %c", 0));

	// %s
	FUN("\n===%%s===\n");
	FUN("(%d)\n", FUN("1 %s", "hola"));
	FUN("(%d)\n", FUN("2 %s %s %s", "hola", "com", "estas?"));
	FUN("(%d)\n", FUN("3 %s", ""));
	FUN("(%d)\n", FUN("4 %s", NULL));

	// %d %i
	FUN("\n===%%d===\n");
	FUN("(%d)\n", FUN("1 %d", 12345));
	FUN("(%d)\n", FUN("2 %d", -12345));
	FUN("(%d)\n", FUN("3 %d", 0));
	FUN("(%d)\n", FUN("4 %d", 2147483647));
	FUN("(%d)\n", FUN("5 %d", -2147483648));
	FUN("(%d)\n", FUN("6 %d", 30000000000));
	FUN("(%d)\n", FUN("7 %d%i %d%i", -5, 5, 12345, 12345));

	// %u
	FUN("\n===%%u===\n");
	FUN("(%d)\n", FUN("1 %u", 12345));
	FUN("(%d)\n", FUN("2 %u", 0));
	FUN("(%d)\n", FUN("3 %u", 4294967295));
	FUN("(%d)\n", FUN("4 %u%u %u%u", 0, 5, 12345, 12345));
	FUN("(%d)\n", FUN("5 %u", -12345));

	// %x %X
	FUN("\n===%%x===\n");
	FUN("(%d)\n", FUN("1 %x", 12345));
	FUN("(%d)\n", FUN("2 %x", 0));
	FUN("(%d)\n", FUN("3 %x", 4294967295));
	FUN("(%d)\n", FUN("4 %x%x %x%x", 0, 13, 12345, 12355));
	FUN("(%d)\n", FUN("5 %x", -12345));
	FUN("(%d)\n", FUN("6 %X", 12345));
	FUN("(%d)\n", FUN("7 %X", 0));
	FUN("(%d)\n", FUN("8 %X", 4294967295));
	FUN("(%d)\n", FUN("9 %X%X %X%X", 0, 13, 12345, 12355));
	FUN("(%d)\n", FUN("10 %X", -12345));

	// %p
	FUN("\n===%%p===\n");
	FUN("(%d)\n", FUN("1 %p", ptr));
	FUN("(%d)\n", FUN("2 %p", NULL));
	
	return (0);
}
