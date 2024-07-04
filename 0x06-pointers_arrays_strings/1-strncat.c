#include "main.h"

/**
*_strncat - entry point concatenates two strings
*@dest: is the destination string
*@src: is the source string
*@n: is the number of bytes
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
