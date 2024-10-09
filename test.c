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
	FUN("hola test 1\n");
	FUN(NULL);
	FUN("\n");
	FUN("àéí¿¡!\n");
	FUN("%?--m\n");

	// %c
	FUN("===%%c===\n");
	FUN(".%c.\n", 'a');
	FUN(".%c%c.%c%c.\n", 'a', 'b', 'c', 'd');

	// %s
	FUN("===%%s===\n");
	FUN(".%s.\n", "hola");
	FUN(".%s %s %s.\n", "hola", "com", "estas?");

	// %d %i
	FUN("===%%d===\n");
	FUN(".%d.\n", 5);
	FUN(".%d%i.%d%i.\n", -5, 5, -2147483648, 2147483647);

	// %u
	FUN("===%%u===\n");
	FUN(".%u.\n", 5);
	FUN(".%u%u.%u%u.\n", -5, 5, '0', 4294967295);

	// %x %X
	FUN("===%%x===\n");
	FUN(".%x.\n", 13);
	FUN(".%x%X.%x%X.\n", 13, 13, -4, 4294967295);

	// Can't test %p on diferent files, or the files allways
	FUN(".%p.\n", ptr);
	return (0);
}
