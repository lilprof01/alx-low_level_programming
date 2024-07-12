#include "main.h"

/**
*_isalpha - entry point checks for alphabetic character
*@c: is the character to be checked
*Return: 1 if uppercase character or 0 if not
*/
int _isalpha(int c)
{
	if ((c > 64 && c <= 90) || (c > 96 && c <= 122))
	{
		return (1);
	}
	return (0);
}
