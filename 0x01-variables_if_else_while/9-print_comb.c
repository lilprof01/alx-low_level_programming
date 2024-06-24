#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point prints all combinations of single digit numbers
*
*Return: Always 0 (success)
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	if (x != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
