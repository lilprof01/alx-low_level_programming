#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point prints the alphabet in lowercase
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

	return (0);
}
