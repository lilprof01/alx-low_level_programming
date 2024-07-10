#include "main.h"

/**
*_puts_recursion - entry point prints a string of character
*followed by a new line
*@s: is the pointer to the string
*Return: void
*/
void _puts_recursion(char *s)
{
	if ((*s != '\0'))
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
