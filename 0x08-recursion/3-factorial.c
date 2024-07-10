#include "main.h"

/**
*factorial - entry point solves the factorial of a number
*@n: is the given number
*Return: factorial result if success and -1 if not
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
