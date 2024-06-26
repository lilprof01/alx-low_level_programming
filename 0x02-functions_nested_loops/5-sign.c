#include "main.h"

/**
*print_sign - entry point prints sign of a number
*@n: is the character value
*Return: 1 if greater than or 0 if it is zero or -1 if less than
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
