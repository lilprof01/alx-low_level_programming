#include "search_algos.h"

/**
 * interpolation_search - function searches for a value in a sorted array of
 * integers with the Interpolation search algorithm.
 *
 * @array: pointer to the first element in the array
 * @size: size of array
 * @value: value to search for
 * Return: index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, min, max;
	double f;

	if (array == NULL)
		return (-1);

	min = 0;
	max = size - 1;

	while (size)
	{
		f = (double)(max - min) / (array[max] - array[min]) * (value - array[min]);
		pos = (size_t)(min + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			min = pos + 1;
		else
			max = pos - 1;

		if (min == max)
			break;
	}

	return (-1);
}
