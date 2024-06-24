#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point prints all numbers of base 16
*
*Return: Always 0 (success)
*/
int main(void)
{
	int i;
	char a;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
