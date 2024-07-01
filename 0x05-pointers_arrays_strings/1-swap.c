#include "main.h"

/**
*swap_int - entry point swaps the value of two integers
*@a: is the first integer
*@b: is teh second integer
*Return: void
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
