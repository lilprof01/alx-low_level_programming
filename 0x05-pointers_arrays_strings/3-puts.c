#include "main.h"
#include <string.h>

/**
*_puts - entry point prints a string followed by a new line
*
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
