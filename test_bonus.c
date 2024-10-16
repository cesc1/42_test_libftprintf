/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguirre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:57:52 by faguirre          #+#    #+#             */
/*   Updated: 2024/10/16 09:54:09 by faguirre         ###   ########.fr       */
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

	FUN("\nTESTS WITH FLAGS [#width-0 +.]\n");
	FUN("--------------------------------\n");
	// %c
	FUN("\n===%%c===\n");
	// %individual flags
	FUN("(%d)\n", FUN("1 .%#c.", 'a'));
	FUN("(%d)\n", FUN("2 .% c.", 'a'));
	FUN("(%d)\n", FUN("3 .%+c.", 'a'));
	FUN("(%d)\n", FUN("4 .%5c.", 'a'));
	FUN("(%d)\n", FUN("5 .%05c.", 'a'));
	FUN("(%d)\n", FUN("6 .%-c.", 'a'));
	FUN("(%d)\n", FUN("7 .%.c.", 'a'));
	//all flags
	FUN("(%d)\n", FUN("8 .%#0- +5.5c.", 'a'));
	//interesting flag combinations
	FUN("(%d)\n", FUN("9 .%-5c.", 'a'));
	FUN("(%d)\n", FUN("10 .%-05c.", 'a'));
	FUN("(%d)\n", FUN("11 .%5.5c.", 'a'));
	FUN("(%d)\n", FUN("12 .%5.7c.", 'a'));
	FUN("(%d)\n", FUN("13 .%-05.7c.", 'a'));

	// %s
	FUN("\n===%%s===\n");
	// %individual flags
	FUN("(%d)\n", FUN("1 .%#s.", "hola"));
	FUN("(%d)\n", FUN("2 .% s.", "hola"));
	FUN("(%d)\n", FUN("3 .%+s.", "hola"));
	FUN("(%d)\n", FUN("4 .%5s.", "hola"));
	FUN("(%d)\n", FUN("4 .%4s.", "hola"));
	FUN("(%d)\n", FUN("4 .%3s.", "hola"));
	FUN("(%d)\n", FUN("4 .%05s.", "hola"));
	FUN("(%d)\n", FUN("5 .%0s.", "hola"));
	FUN("(%d)\n", FUN("6 .%-s.", "hola"));
	FUN("(%d)\n", FUN("7 .%.s.", "hola"));
	FUN("(%d)\n", FUN("8 .%.3s.", "hola"));
	FUN("(%d)\n", FUN("9 .%.4s.", "hola"));
	FUN("(%d)\n", FUN("10 .%.5s.", "hola"));
	//all flags
	FUN("(%d)\n", FUN("11 .%#0- +5.5s.", "hola"));
	//interesting flag combinations
	FUN("(%d)\n", FUN("12 .%-5s.", "hola"));
	FUN("(%d)\n", FUN("12 .%-4s.", "hola"));
	FUN("(%d)\n", FUN("13 .%-05s.", "hola"));
	FUN("(%d)\n", FUN("14 .%5.5s.", "hola"));
	FUN("(%d)\n", FUN("15 .%5.7s.", "hola"));
	FUN("(%d)\n", FUN("16 .%-05.7s.", "hola"));


	// %d %i
	FUN("\n===%%d===\n");
	// %individual flags
	FUN("(%d)\n", FUN("1 .%#d.", 5));
	FUN("(%d)\n", FUN("2 .% i.", 5));
	FUN("(%d)\n", FUN("3 .% i.", -5));
	FUN("(%d)\n", FUN("4 .% i.", 0));
	FUN("(%d)\n", FUN("5 .%+d.", 5));
	FUN("(%d)\n", FUN("6 .%+d.", -5));
	FUN("(%d)\n", FUN("7 .%+d.", 0));
	FUN("(%d)\n", FUN("8 .%5i.", 5));
	FUN("(%d)\n", FUN("8 .%5i.", 555));
	FUN("(%d)\n", FUN("8 .%3i.", 555));
	FUN("(%d)\n", FUN("8 .%1i.", 0));
	FUN("(%d)\n", FUN("8 .%2i.", 0));
	FUN("(%d)\n", FUN("8 .%01i.", 0));
	FUN("(%d)\n", FUN("8 .%02i.", 0));
	FUN("(%d)\n", FUN("9 .%0d.", 5));
	FUN("(%d)\n", FUN("10 .%-i.", 5));
	FUN("(%d)\n", FUN("11 .%.d.", 5));
	FUN("(%d)\n", FUN("12 .%.5d.", 5));
	//all flags
	FUN("(%d)\n", FUN("13 .%#0- +5.5d.", 5));
	//interesting flag combinations
	FUN("(%d)\n", FUN("14 .%-5d.", 5));
	FUN("(%d)\n", FUN("15 .%-05i.", 55));
	FUN("(%d)\n", FUN("15 .%-01i.", 55));
	FUN("(%d)\n", FUN("16 .%5.5d.", 5));
	FUN("(%d)\n", FUN("17 .%5.7i.", 55555));
	FUN("(%d)\n", FUN("17 .%5.3i.", 55555));
	FUN("(%d)\n", FUN("17 .%5.5i.", 55555));
	FUN("(%d)\n", FUN("18 .%-05.7d.", 5));
	FUN("(%d)\n", FUN("19 .% +d.", 5));
	FUN("(%d)\n", FUN("20 .% +d.", -5));

	// %u
	FUN("\n===%%u===\n");
	// %individual flags
	FUN("(%d)\n", FUN("1 .%#u.", 5));
	FUN("(%d)\n", FUN("2 .% u.", 5));
	FUN("(%d)\n", FUN("3 .%+u.", 5));
	FUN("(%d)\n", FUN("4 .%5u.", 555));
	FUN("(%d)\n", FUN("4 .%2u.", 555));
	FUN("(%d)\n", FUN("4 .%3u.", 555));
	FUN("(%d)\n", FUN("5 .%05u.", 5));
	FUN("(%d)\n", FUN("5 .%01u.", 5));
	FUN("(%d)\n", FUN("6 .%-3u.", 555));
	FUN("(%d)\n", FUN("6 .%-5u.", 555));
	FUN("(%d)\n", FUN("7 .%.u.", 5));
	FUN("(%d)\n", FUN("7 .%.3u.", 5));
	//all flags
	FUN("(%d)\n", FUN("8 .%#0- +5.5u.", 5));
	//interesting flag combinations
	FUN("(%d)\n", FUN("9 .%-5u.", 5));
	FUN("(%d)\n", FUN("10 .%-05u.", 5));
	FUN("(%d)\n", FUN("11 .%5.5u.", 5));
	FUN("(%d)\n", FUN("12 .%5.7u.", 5));
	FUN("(%d)\n", FUN("13 .%-05.7u.", 5));

	// %x %X
	FUN("\n===%%x===\n");
	// %individual flags
	FUN("(%d)\n", FUN("1 .%#x.", 13));
	FUN("(%d)\n", FUN("2 .% X.", 13));
	FUN("(%d)\n", FUN("3 .%+x.", 13));
	FUN("(%d)\n", FUN("4 .%1X.", 1000));
	FUN("(%d)\n", FUN("4 .%5X.", 1000));
	FUN("(%d)\n", FUN("4 .%01X.", 1000));
	FUN("(%d)\n", FUN("4 .%01X.", 1000));
	FUN("(%d)\n", FUN("5 .%0x.", 13));
	FUN("(%d)\n", FUN("6 .%-X.", 13));
	FUN("(%d)\n", FUN("7 .%.x.", 13));
	//all flags
	FUN("(%d)\n", FUN("8 .%#0- +5.5x.", 13));
	//interesting flag combinations
	FUN("(%d)\n", FUN("9 .%-5x.", 13));
	FUN("(%d)\n", FUN("10 .%-05X.", 13));
	FUN("(%d)\n", FUN("11 .%5.5x.", 13));
	FUN("(%d)\n", FUN("12 .%5.7X.", 13));
	FUN("(%d)\n", FUN("13 .%-05.7x.", 13));	
	FUN("(%d)\n", FUN("14 .%#x.", 0));
	FUN("(%d)\n", FUN("15 .%#X.", 0));


	// %p
	FUN("\n===%%p===\n");
	// %individual flags
	FUN("(%d)\n", FUN("1 .%#p.", ptr));
	FUN("(%d)\n", FUN("2 .% p.", ptr));
	FUN("(%d)\n", FUN("3 .%+p.", ptr));
	FUN("(%d)\n", FUN("4 .%5p.", ptr));
	FUN("(%d)\n", FUN("4 .%20p.", ptr));
	FUN("(%d)\n", FUN("4 .%-20p.", ptr));
	FUN("(%d)\n", FUN("4 .%020p.", ptr));
	FUN("(%d)\n", FUN("4 .%-020p.", ptr));
	FUN("(%d)\n", FUN("5 .%0p.", ptr));
	FUN("(%d)\n", FUN("6 .%-p.", ptr));
	FUN("(%d)\n", FUN("7 .%.p.", ptr));
	//all flags
	FUN("(%d)\n", FUN("8 .%#0- +5.5p.", ptr));
	//interesting flag combinations
	FUN("(%d)\n", FUN("9 .%-5p.", ptr));
	FUN("(%d)\n", FUN("10 .%-05p.", ptr));
	FUN("(%d)\n", FUN("11 .%5.5p.", ptr));
	FUN("(%d)\n", FUN("12 .%5.15p.", ptr));
	FUN("(%d)\n", FUN("13 .%15.5p.", ptr));
	FUN("(%d)\n", FUN("14 .%-05.7p.", ptr));
	
	return (0);
}
