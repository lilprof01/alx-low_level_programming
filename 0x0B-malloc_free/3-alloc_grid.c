#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
***alloc_grid - allocates memory and returns a pointer to a 2d array
*@width: is the number of columns
*@height: is the number of rows
*Return: null if failure, or a if success
*/
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int));
	if (a[i] == NULL)
	{
		for (j = 0; j < i; j++)
	{
		free(a[j]);
	}
		free(a);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		a[i][j] = 0;
	}
	}
	return (a);
}
