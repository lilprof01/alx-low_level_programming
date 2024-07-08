#include "main.h"
#include <stdio.h>

/**
* *_memset - entry point fills memory with a constant byte
*@s: is the pointer to the memory area
*@b: is the size of the memory
*@n: is the number of bytes to be filled
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = (char *)s;

	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
}
