#include "main.h"

/**
*_abs - entry point computes absolute value of an integer
*@c: the integer to be computed
*Return: Absolute value of the integer or 0
*/
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
