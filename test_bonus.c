/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
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

	FUN("\nTESTS WITH FLAGS [#width-0 +.]\n");
	FUN("--------------------------------\n");
	// %c
	FUN("\n===%%c===\n");
	// %individual flags
	FUN("(%d)\n", FUN(".%#c.", 'a'));
	FUN("(%d)\n", FUN(".% c.", 'a'));
	FUN("(%d)\n", FUN(".%+c.", 'a'));
	FUN("(%d)\n", FUN(".%5c.", 'a'));
	FUN("(%d)\n", FUN(".%0c.", 'a'));
	FUN("(%d)\n", FUN(".%-c.", 'a'));
	FUN("(%d)\n", FUN(".%.c.", 'a'));
	//all flags
	FUN("(%d)\n", FUN(".%#0- +5.5c.", 'a'));
	//interesting flag combinations
	FUN("(%d)\n", FUN(".%-5c.", 'a'));
	FUN("(%d)\n", FUN(".%-05c.", 'a'));
	FUN("(%d)\n", FUN(".%5.5c.", 'a'));
	FUN("(%d)\n", FUN(".%5.7c.", 'a'));
	FUN("(%d)\n", FUN(".%-05.7c.", 'a'));

	// %s
	FUN("\n===%%s===\n");
	// %individual flags
	FUN("(%d)\n", FUN(".%#s.", "hola"));
	FUN("(%d)\n", FUN(".% s.", "hola"));
	FUN("(%d)\n", FUN(".%+s.", "hola"));
	FUN("(%d)\n", FUN(".%5s.", "hola"));
	FUN("(%d)\n", FUN(".%0s.", "hola"));
	FUN("(%d)\n", FUN(".%-s.", "hola"));
	FUN("(%d)\n", FUN(".%.s.", "hola"));
	FUN("(%d)\n", FUN(".%.3s.", "hola"));
	FUN("(%d)\n", FUN(".%.4s.", "hola"));
	FUN("(%d)\n", FUN(".%.5s.", "hola"));
	//all flags
	FUN("(%d)\n", FUN(".%#0- +5.5s.", "hola"));
	//interesting flag combinations
	FUN("(%d)\n", FUN(".%-5s.", "hola"));
	FUN("(%d)\n", FUN(".%-05s.", "hola"));
	FUN("(%d)\n", FUN(".%5.5s.", "hola"));
	FUN("(%d)\n", FUN(".%5.7s.", "hola"));
	FUN("(%d)\n", FUN(".%-05.7s.", "hola"));


	// %d %i
	FUN("\n===%%d===\n");
	// %individual flags
	FUN("(%d)\n", FUN(".%#d.", 5));
	FUN("(%d)\n", FUN(".% i.", 5));
	FUN("(%d)\n", FUN(".% i.", -5));
	FUN("(%d)\n", FUN(".% i.", 0));
	FUN("(%d)\n", FUN(".%+d.", 5));
	FUN("(%d)\n", FUN(".%+d.", -5));
	FUN("(%d)\n", FUN(".%+d.", 0));
	FUN("(%d)\n", FUN(".%5i.", 5));
	FUN("(%d)\n", FUN(".%0d.", 5));
	FUN("(%d)\n", FUN(".%-i.", 5));
	FUN("(%d)\n", FUN(".%.d.", 5));
	FUN("(%d)\n", FUN(".%.5d.", 5));
	//all flags
	FUN("(%d)\n", FUN(".%#0- +5.5d.", 5));
	//interesting flag combinations
	FUN("(%d)\n", FUN(".%-5d.", 5));
	FUN("(%d)\n", FUN(".%-05i.", 5));
	FUN("(%d)\n", FUN(".%5.5d.", 5));
	FUN("(%d)\n", FUN(".%5.7i.", 5));
	FUN("(%d)\n", FUN(".%-05.7d.", 5));
	FUN("(%d)\n", FUN(".% +d.", 5));
	FUN("(%d)\n", FUN(".% +d.", -5));

	// %u
	FUN("\n===%%u===\n");
	// %individual flags
	FUN("(%d)\n", FUN(".%#u.", 5));
	FUN("(%d)\n", FUN(".% u.", 5));
	FUN("(%d)\n", FUN(".%+u.", 5));
	FUN("(%d)\n", FUN(".%5u.", 5));
	FUN("(%d)\n", FUN(".%0u.", 5));
	FUN("(%d)\n", FUN(".%-u.", 5));
	FUN("(%d)\n", FUN(".%.u.", 5));
	//all flags
	FUN("(%d)\n", FUN(".%#0- +5.5u.", 5));
	//interesting flag combinations
	FUN("(%d)\n", FUN(".%-5u.", 5));
	FUN("(%d)\n", FUN(".%-05u.", 5));
	FUN("(%d)\n", FUN(".%5.5u.", 5));
	FUN("(%d)\n", FUN(".%5.7u.", 5));
	FUN("(%d)\n", FUN(".%-05.7u.", 5));

	// %x %X
	FUN("\n===%%x===\n");
	// %individual flags
	FUN("(%d)\n", FUN(".%#x.", 13));
	FUN("(%d)\n", FUN(".% X.", 13));
	FUN("(%d)\n", FUN(".%+x.", 13));
	FUN("(%d)\n", FUN(".%5X.", 13));
	FUN("(%d)\n", FUN(".%0x.", 13));
	FUN("(%d)\n", FUN(".%-X.", 13));
	FUN("(%d)\n", FUN(".%.x.", 13));
	//all flags
	FUN("(%d)\n", FUN(".%#0- +5.5x.", 13));
	//interesting flag combinations
	FUN("(%d)\n", FUN(".%-5x.", 13));
	FUN("(%d)\n", FUN(".%-05X.", 13));
	FUN("(%d)\n", FUN(".%5.5x.", 13));
	FUN("(%d)\n", FUN(".%5.7X.", 13));
	FUN("(%d)\n", FUN(".%-05.7x.", 13));	
	FUN("(%d)\n", FUN(".%#x.", 0));
	FUN("(%d)\n", FUN(".%#X.", 0));


	// %p
	FUN("\n===%%p===\n");
	// %individual flags
	FUN("(%d)\n", FUN(".%#p.", ptr));
	FUN("(%d)\n", FUN(".% p.", ptr));
	FUN("(%d)\n", FUN(".%+p.", ptr));
	FUN("(%d)\n", FUN(".%5p.", ptr));
	FUN("(%d)\n", FUN(".%0p.", ptr));
	FUN("(%d)\n", FUN(".%-p.", ptr));
	FUN("(%d)\n", FUN(".%.p.", ptr));
	//all flags
	FUN("(%d)\n", FUN(".%#0- +5.5p.", ptr));
	//interesting flag combinations
	FUN("(%d)\n", FUN(".%-5p.", ptr));
	FUN("(%d)\n", FUN(".%-05p.", ptr));
	FUN("(%d)\n", FUN(".%5.5p.", ptr));
	FUN("(%d)\n", FUN(".%5.15p.", ptr));
	FUN("(%d)\n", FUN(".%15.5p.", ptr));
	FUN("(%d)\n", FUN(".%-05.7p.", ptr));
	
	return (0);
}
