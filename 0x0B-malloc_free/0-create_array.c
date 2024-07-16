#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**create_array - creates an array of characters
*@size: is the size of the array
*@c: is the charcater to be intialized and printed
*Return: null if size is 0 or a is null, or a if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *)malloc(size * sizeof(a));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	printf("\n");
	return (a);
}
