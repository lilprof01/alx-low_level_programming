#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*free_grid - frees the memory allocated to a 2d array
*@grid: is the pointer to the 2d array
*@height: is the number of rows
*Return: Void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
