#include "main.h"

/**
*binary_to_uint - entry point converts a binary number to an unsigned int
*@b: is the pointer to a string of 0 and 1 chars
*Return: 0 if b is NULL or contains chars not 0 or 1 - 0
*Otherwise return the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base2;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base2;
		}
	}

	return (ui);
}
