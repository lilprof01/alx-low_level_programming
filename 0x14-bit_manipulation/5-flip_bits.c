#include "main.h"

/**
*flip_bits - entry point returns the number of bits needed to flip
*to get from one number to another
*@n: is the first bit word
*@m: is the second bit word
*
*Return: the distance(x)
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	int shift = (sizeof(n) * 8);

	while (shift--)
	{
		x += (n >> shift & 1) != (m >> shift & 1);
	}
	return (x);
}
