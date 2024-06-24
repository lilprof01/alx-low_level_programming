#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point prints lowercase alphabet except q and e
*
*Return: Always 0 (success)
*/
int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
		putchar('\n');
		return (0);
}
