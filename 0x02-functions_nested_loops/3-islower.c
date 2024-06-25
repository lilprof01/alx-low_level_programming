#include "main.h"

/**
*_islower - entry point checks for lowercase letters
*c is the character to be checked
*Return: 1 if lowercase character or 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
