#include "main.h"

/**
*print_triangle - entry point prints a triangle in the terminal
*@size: is the user input for triangle size
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (k = size - i; k >= 1; k--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
