#include "main.h"
#include <stdio.h>

/**
* *_strcat - entry point concatenates two strings
*
*Return: pointer to the string dest
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';	
	return (dest);
}
