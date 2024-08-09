#include "main.h"

/**
*get_endianness - entry point checks the endian status
*Return: 0 if big endian, or 1 if little endian
*/
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)(&x);

	return (*c);
}
