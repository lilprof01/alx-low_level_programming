#include "main.h"

/**
*print_numbers - entry point prints all numbers from 0 through to 9
*/
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
