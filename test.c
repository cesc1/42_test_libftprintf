/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
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
	FUN("hola test 1\n");
	FUN(NULL);
	FUN("\n");
	FUN("àéí¿¡!\n");
	FUN("%?--m\n");

	// %c
	FUN("\n===%%c===\n");
	FUN(".%c.\n", 'a');
	FUN(".%c%c.%c%c.\n", 'a', 'b', 'c', 'd');
	FUN(".%c.\n", 200);
	// %individual flags
	FUN(".%#c.\n", 'a');
	FUN(".% c.\n", 'a');
	FUN(".%+c.\n", 'a');
	FUN(".%5c.\n", 'a');
	FUN(".%0c.\n", 'a');
	FUN(".%-c.\n", 'a');
	FUN(".%.c.\n", 'a');
	//all flags
	FUN(".%#0- +5.5c.", 'a');
	//interesting flag combinations
	FUN(".%-5c.\n", 'a');
	FUN(".%-05c.\n", 'a');
	FUN(".%5.5c.\n", 'a');
	FUN(".%5.7c.\n", 'a');
	FUN(".%-05.7c.\n", 'a');

	// %s
	FUN("\n===%%s===\n");
	FUN(".%s.\n", "hola");
	FUN(".%s %s %s.\n", "hola", "com", "estas?");
	// %individual flags
	FUN(".%#s.\n", "hola");
	FUN(".% s.\n", "hola");
	FUN(".%+s.\n", "hola");
	FUN(".%5s.\n", "hola");
	FUN(".%0s.\n", "hola");
	FUN(".%-s.\n", "hola");
	FUN(".%.s.\n", "hola");
	FUN(".%.3s.\n", "hola");
	FUN(".%.4s.\n", "hola");
	FUN(".%.5s.\n", "hola");
	//all flags
	FUN(".%#0- +5.5s.", "hola");
	//interesting flag combinations
	FUN(".%-5s.\n", "hola");
	FUN(".%-05s.\n", "hola");
	FUN(".%5.5s.\n", "hola");
	FUN(".%5.7s.\n", "hola");
	FUN(".%-05.7s.\n", "hola");


	// %d %i
	FUN("\n===%%d===\n");
	FUN(".%d.\n", 5);
	FUN(".%d%i.%d%i.\n", -5, 5, -2147483648, 2147483647);
	// %individual flags
	FUN(".%#d.\n", 5);
	FUN(".% i.\n", 5);
	FUN(".% i.\n", -5);
	FUN(".% i.\n", 0);
	FUN(".%+d.\n", 5);
	FUN(".%+d.\n", -5);
	FUN(".%+d.\n", 0);
	FUN(".%5i.\n", 5);
	FUN(".%0d.\n", 5);
	FUN(".%-i.\n", 5);
	FUN(".%.d.\n", 5);
	FUN(".%.5d.\n", 5);
	//all flags
	FUN(".%#0- +5.5d.", 5);
	//interesting flag combinations
	FUN(".%-5d.\n", 5);
	FUN(".%-05i.\n", 5);
	FUN(".%5.5d.\n", 5);
	FUN(".%5.7i.\n", 5);
	FUN(".%-05.7d.\n", 5);
	FUN(".% +d.\n", 5);
	FUN(".% +d.\n", -5);

	// %u
	FUN("\n===%%u===\n");
	FUN(".%u.\n", 5);
	FUN(".%u%u.%u%u.\n", -5, 5, '0', 4294967295);
	// %individual flags
	FUN(".%#u.\n", 5);
	FUN(".% u.\n", 5);
	FUN(".%+u.\n", 5);
	FUN(".%5u.\n", 5);
	FUN(".%0u.\n", 5);
	FUN(".%-u.\n", 5);
	FUN(".%.u.\n", 5);
	//all flags
	FUN(".%#0- +5.5u.", 5);
	//interesting flag combinations
	FUN(".%-5u.\n", 5);
	FUN(".%-05u.\n", 5);
	FUN(".%5.5u.\n", 5);
	FUN(".%5.7u.\n", 5);
	FUN(".%-05.7u.\n", 5);

	// %x %X
	FUN("\n===%%x===\n");
	FUN(".%x.\n", 13);
	FUN(".%x%X.%x%X.\n", 13, 13, -4, 4294967295);
	// %individual flags
	FUN(".%#x.\n", 13);
	FUN(".% X.\n", 13);
	FUN(".%+x.\n", 13);
	FUN(".%5X.\n", 13);
	FUN(".%0x.\n", 13);
	FUN(".%-X.\n", 13);
	FUN(".%.x.\n", 13);
	//all flags
	FUN(".%#0- +5.5x.", 13);
	//interesting flag combinations
	FUN(".%-5x.\n", 13);
	FUN(".%-05X.\n", 13);
	FUN(".%5.5x.\n", 13);
	FUN(".%5.7X.\n", 13);
	FUN(".%-05.7x.\n", 13);	
	FUN(".%#x.\n", 0);
	FUN(".%#X.\n", 0);


	// %p
	FUN("\n===%%p===");
	FUN(".%p.\n", ptr);
	// %individual flags
	FUN(".%#p.\n", ptr);
	FUN(".% p.\n", ptr);
	FUN(".%+p.\n", ptr);
	FUN(".%5p.\n", ptr);
	FUN(".%0p.\n", ptr);
	FUN(".%-p.\n", ptr);
	FUN(".%.p.\n", ptr);
	//all flags
	FUN(".%#0- +5.5p.", ptr);
	//interesting flag combinations
	FUN(".%-5p.\n", ptr);
	FUN(".%-05p.\n", ptr);
	FUN(".%5.5p.\n", ptr);
	FUN(".%5.15p.\n", ptr);
	FUN(".%15.5p.\n", ptr);
	FUN(".%-05.7p.\n", ptr);
	
	return (0);
}
