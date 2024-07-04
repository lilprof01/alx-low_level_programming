#include "main.h"

/**
* *string_toupper - entry point changes all lowercase in a string to uppercase
*@x: pointer to the string
*Return: x
*/
char *string_toupper(char *x)
{
	int len;

	len = 0;
	while (x[len] != '\0')
	{
		if (x[len] >= 97 && x[len] <= 122)
		{
			x[len] = x[len] - 32;
		}
		len++;
	}
	return (x);
}
