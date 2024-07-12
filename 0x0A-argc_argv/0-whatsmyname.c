#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - prints out the name of program that calls it
*@argc: is the arguments count
*@argv: is the arguments strings
*Return: always 0 (successful)
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
