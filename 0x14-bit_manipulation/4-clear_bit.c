#include "main.h"

/**
*clear_bit - entry point sets the value of a bit at a given index to 0
*@n: is the pointer to the bit
*@index: is the position to be cleared
*Return: 1 if success, or -1 if failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
