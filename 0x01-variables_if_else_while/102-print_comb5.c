#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point prints combinations of a two two-digit number
*
*Return: Always 0 (success)
*/
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (!(x == 98 && y == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
