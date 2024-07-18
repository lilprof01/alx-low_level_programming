#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*
*
*
*
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
