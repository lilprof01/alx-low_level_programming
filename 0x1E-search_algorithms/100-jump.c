#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function searches for a value in a sorted array of integers
 * with the Jump search algorithm.
 *
 * @array: a pointer to the first element of the array
 * @size: size of array
 * @value: value to search for
 * Return: index
 */

int jump_search(int *array, size_t size, int value)
{
	int index, k, m, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

