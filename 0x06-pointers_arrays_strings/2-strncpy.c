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
	int bytes_count;

	for (bytes_count = 0; bytes_count < n && src[bytes_count] != '\0'; bytes_count++)
	{
		dest[bytes_count] = src[bytes_count];
	}
	for (; bytes_count < n; bytes_count++)
	{
		dest[bytes_count] = '\0';
	}
	return (dest);
}
