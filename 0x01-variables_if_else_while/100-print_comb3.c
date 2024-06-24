#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point prints all possible combinations of two digits
*
*Return: Always 0 (success)
*/
int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (!(x == 8 && y == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
