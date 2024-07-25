#include "function_pointers.h"
#include <stddef.h>

/**
*int_index - searches for an integer
*@array: is the array containing the integers
*@size: is the size of the array
*@cmp: is the function pointer to compare the integers in the array
*Return: -1 if NULL or no integers match, or i if integer matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
