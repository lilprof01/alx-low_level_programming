#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - prints every arguments it takes startin with program name
*followed by a new line
*@argc: is number of arguments
*@argv: is array containing the strings
*Return: always 0 (successful)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
