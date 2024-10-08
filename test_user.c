#include "libftprintf.h"
#include "libft/libft.h"

int	main()
{
	int result;

	// Test with no cs
	result = ft_printf("Hola soc el cesc"); ft_printf("(%d)\n", result); 
	result = ft_printf(NULL); ft_printf("(%d)\n", result); 
	result = ft_printf("éà¿¿íª."); ft_printf("(%d)\n", result); 

	// Test with %c
	result = ft_printf(". %c .", 'a'); ft_printf("(%d)\n", result); 
	result = ft_printf(". %c%c . %c%c", 'a', 'b', 'c', 'd'); ft_printf("(%d)\n", result); 
	
	return (0);
}
