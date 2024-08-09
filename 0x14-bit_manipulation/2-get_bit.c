#include "main.h"

/**
*get_bit - gets the value of a bit at a given index
*@n: is the number
*@index: is the index to get the value from
*Return: the value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
