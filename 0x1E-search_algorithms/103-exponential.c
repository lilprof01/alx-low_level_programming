#include "search_algos.h"

/**
  * _binary_search - function searches for a value in a sorted array
  * of integers with binary search.
  *
  * @array: pointer to the first element in the array
  * @left: The starting index of the [sub]array
  * @right: The ending index of the [sub]array
  * @value: The value to search for.
  *
  * Return: index where the value is located, else
  * if the value is not present or the array is NULL, -1.
  */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - function Searches for a value in a sorted array
  * of integers with exponential search algorithm.
  *
  * @array: pointer to the first element of the array.
  * @size: size of the array.
  * @value: The value to search for.
  *
  * Return: index where value is located, else
  * if the value is not present or the array is NULL, -1.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
