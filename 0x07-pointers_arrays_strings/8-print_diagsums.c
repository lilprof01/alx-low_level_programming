#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, x, p, q = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		q += *(a + p);
	}
	for (x = 0; x < size; x++)
	{
		p = (x * size) + (size - 1 - x);
		r += *(a + p);
	}
	printf("%i, %i\n", q, r);
}
