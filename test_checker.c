#include "stdio.h"

int	main()
{
	int result;

	// Test with no cs
	result = printf("Hola soc el cesc"); printf("(%d)\n", result); 
	result = printf(NULL); printf("(%d)\n", result); 
	result = printf("éà¿¿íª."); printf("(%d)\n", result); 

	// Test with %c
	result = printf(". %c .", 'a'); printf("(%d)\n", result); 
	result = printf(". %c%c . %c%c", 'a', 'b', 'c', 'd'); printf("(%d)\n", result); 
	
	return (0);
}
