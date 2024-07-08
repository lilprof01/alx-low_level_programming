#include "main.h"
#include <stdio.h>

/**
* *_memcpy - entry point copies n bytes of a memory area to another
*@dest: is the destination memory
*@src: is the memory source to copy from
*@n: is the number of bytes to be copied
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *srcptr = (char *)src;
	char *destptr = (char *)dest;
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*destptr = *srcptr;
	}
	return (dest);
}
