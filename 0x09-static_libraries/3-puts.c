#include "main.h"
#include <string.h>

/**
*_puts - entry point prints a string followed by a new line
*@str: is the character of each index of the string
*Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
