#include "main.h"

/**
 * check - checks to see if number is prime
 * @x:int
 * @y:int
 * Return:int
 */
int check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}

/**
 * is_prime_number - checks and states if number is prime
 * @n: is the number to be checked
 * Return: 1 if number is prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
