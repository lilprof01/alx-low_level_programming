#include "main.h"

/**
*print_line - entry point prints a straight line in the terminal
*@n: is the number of times user wants the line printed
*/
void print_line(int n)
{
	int u;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (u = 1; u <= n; u++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
