#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - prints the number of arguments entered in the program
*@argc: is number of arguments
*@argv: is number of strings
*Return: always o (successful)
*/
int main(int argc, char *argv[])
{
	argc -= 1;
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
