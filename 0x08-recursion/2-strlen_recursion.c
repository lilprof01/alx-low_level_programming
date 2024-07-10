#include "main.h"

/**
*_strlen_recursion - entry point returns the length of a string
*@s: is the string address
*Return: string length on success or 0 if not
*/
int _strlen_recursion(char *s)
{
	if ((*s != '\0'))
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
