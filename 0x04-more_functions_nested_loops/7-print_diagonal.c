#include "main.h"

/**
*print_diagonal - entry point prints a diagonal line in the terminal
*@n: is the number of times line should be printed
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
	for (j = 1; j < i; j++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
}
