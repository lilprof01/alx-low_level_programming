#include <stdio.h>

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
		return (0);
}
