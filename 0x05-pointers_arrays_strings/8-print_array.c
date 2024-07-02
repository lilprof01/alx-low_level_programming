#include "main.h"

/**
*print_array - entry point prints n elements of an array of integer
*@a: is the name of array
*@n: is the number of elements in array
*Return: a and n inputs
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
