#include "main.h"

/**
*more_numbers - entry point prints 0 to 14 10 times
*/
void more_numbers(void)
{
	int i;
	int c;

	i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
