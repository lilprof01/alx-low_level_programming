#include "main.h"

/**
*int_isupper - entry point checks if character is uppercase
*@c: the character to be checked for
*Return: 1 if uppercase or 0 if not
*/
int _isupper(int c)
{

	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
