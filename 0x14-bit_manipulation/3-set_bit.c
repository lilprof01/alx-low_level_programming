#include "main.h"

/**
*set_bit - entry ppoint sets the value of a bit at a given index to 1
*@n: is the pointer to the bit
*@index: is the index of the bit
*Return: 1 if success,or  -1 if failed
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
	{
		return (-1);
	}

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
