#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point prints lowercase alphabet
*followed by uppercase alphabet, and a new line
*
*Return: Always 0 (success)
*/
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
