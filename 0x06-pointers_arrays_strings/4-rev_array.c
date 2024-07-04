#include "main.h"

/**
*reverse_array - entry point reverses the content of an array of integer
*@a: pointer to the array
*@n: number of elements in the array
*Return: void
*/
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
