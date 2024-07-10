#include "main.h"

/**
*check - entry point checks if the number has a natural square root
*@a: is the value for natural square root number
*@b: is the given number to be checked
*Return: value of the square root
*/
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
*_sqrt_recursion - entry point returns the square root of a number
*@n: is the given number
*Return: square root of number
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
