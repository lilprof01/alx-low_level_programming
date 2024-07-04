#include "main.h"

/**
* *leet - entry point encodes a string
*@s: pointer to the string
*Return: s
*/
char *leet(char *s)
{
	int len;
	int count;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	len = 0;
	while (s[len] != '\0')
	{
		count = 0;
		while (count < 10)
		{
			if (letters[count] == s[len])
			{
				s[len] = numbers[count];
			}
			count++;
		}
		len++;
	}
	return (s);
}
