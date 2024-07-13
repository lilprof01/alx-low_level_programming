#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - multiplies two numbers
*@argc: is the argument count
*@argv: is the array containing arguments entered into the program
*Return: 0 if success or 1 if not
*/
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
