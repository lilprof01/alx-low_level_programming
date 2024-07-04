#include "main.h"

/**
*_strncpy - entry point copies a string
*@dest: is the destination string
*@src: is the source string
*@n: is the number of bytes to be used
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int b_count;

	for (b_count = 0; b_count < n && src[b_count] != '\0'; b_count++)
	{
		dest[b_count] = src[b_count];
	}
	for (; b_count < n; b_count++)
	{
		dest[b_count] = '\0';
	}
	return (dest);
}
