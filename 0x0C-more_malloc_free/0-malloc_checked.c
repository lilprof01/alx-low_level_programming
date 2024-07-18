#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**malloc_checked - allocates memory
*@b: is the number of bytes to be allocated
*
*Return: Void pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
