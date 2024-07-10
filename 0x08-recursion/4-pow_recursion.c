#include "main.h"

/**
*_pow_recursion - entry point returns value of x raised to y
*@x: is the base value
*@y: is the power value
*Return: value of x raised to y if success or 0 if not
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
