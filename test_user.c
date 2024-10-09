#include <stdio.h>

int	main()
{
	int result;
	//char	c = 'a';

	// Test with no cs
	result = printf("Hola soc el cesc"); printf("(%d)\n", result); 
	result = printf(NULL); printf("(%d)\n", result); 
	result = printf("éà¿¿íª."); printf("(%d)\n", result); 

	// Test with %c
	printf("\nTEST %%c\n");
	result = printf(". %c .", 'a'); printf("(%d)\n", result);
	result = printf(". %c%c . %c%c", 'a', 'b', 'c', 'd'); printf("(%d)\n", result);

	// Test with %s
	printf("\nTEST %%s\n");
	result = printf(". %s .", "hola"); printf("(%d)\n", result);
	result = printf(". %s%s . %s%s", "hola", "Nen", "com", "Estas"); printf("(%d)\n", result);

	// Test with %d / %i
	printf("\nTEST %%d %%i\n");
	result = printf(". %d .", 55); printf("(%d)\n", result); 
	result = printf(". %d%i . %d%i", 1, -2, 3, -2147483648); printf("(%d)\n", result);

	// Test with %u
	printf("\nTEST %%u\n");
	result = printf(". %u .", 55); printf("(%d)\n", result); 
	result = printf(". %u%u . %u%u", 1, 2, 3, 4294967295); printf("(%d)\n", result);

	// Test with %x %X
	printf("\nTEST %%x %%X\n");
	result = printf(". %x .. %X .", 58, 58); printf("(%d)\n", result); 
	result = printf(". %x%X . %x%X", 1, 2, 3, 4294967295); printf("(%d)\n", result);

	// Test with %x %X
	//printf("\nTEST %%p\n");
	//result = printf("%020p", &c); printf("(%d)\n", result); 
	return (0);
}
