#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
  * binary_search - function searches for a value in an array of integers with
  * binary search algorithm
  * @array: pointer to the first element of the array
  * @size: number of elements in array
  * @value: value to search for
  * Return: index of value, else -1 if value is not present in array or
  * if array is NULL
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t lb = 0;
	size_t ub = size - 1;
	size_t mid = -1;
	int index = -1;

	if (array == NULL)
		return (-1);
	while (lb <= ub)
	{
		mid = lb + (ub - lb) / 2;
		printf("Searching in array: ");
		for (i = lb; i <= ub; i++)
		{
			if (i == ub)
			{
				printf("%d\n", array[ub]);
				break;
			}
			printf("%d, ", array[i]);
		}
		if (array[mid] == value)
		{
			index = mid;
			break;
		}
		else
		{
			if (array[mid] < value)
			{
				lb = mid + 1;
			}
			else
			{
				ub = mid - 1;
			}
		}
	}
	return (index);
}
