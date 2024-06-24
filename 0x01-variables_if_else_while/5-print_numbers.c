#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point prints 0 to 9
*
*Return: Always 0 (success)
*/
int main(void)
{
	char a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
