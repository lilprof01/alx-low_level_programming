#include "main.h"

/**
*_print_rev_recursion - entry point prints a string in reverse
*@s: is the pointer to the string
*Return: void
*/
void _print_rev_recursion(char *s)
{
	if ((*s == '\0'))
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
