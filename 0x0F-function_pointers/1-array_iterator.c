#include "function_pointers.h"
#include <stddef.h>

/**
*array_iterator - is a function given as parameter on elements of an array
*
*@array: is the array to execute the function on
*@size: is the size of the array
*@action:  is the function pointer to be used
*
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
