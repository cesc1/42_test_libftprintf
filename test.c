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
#include <stdlib.h>
#include <stdarg.h>

int	print(int (*f)(const char *, va_list), const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	f(str, args);
	va_end();
}

int	main()
{
	print(printf, "%s %s\n", "hola", "amics");
	print(ft_printf, "%s %s\n", "hola", "amics");
}
