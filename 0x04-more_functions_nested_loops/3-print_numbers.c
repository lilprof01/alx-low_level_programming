#include "main.h"

/**
*print_numbers - entry point prints all numbers from 0 through to 9
*@c: charcater to be computed
*Return: void
*/
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
