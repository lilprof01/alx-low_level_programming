#include "main.h"
#include <stdio.h>

/**
* *_strcat - entry point concatenates two strings
*
*Return: pointer to the string dest
*/
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
