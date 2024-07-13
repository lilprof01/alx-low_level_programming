#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - multiplies two numbers
*@argc: is the argument count
*@argv: is the array containing arguments entered into the program
*Return: always 0 if success or 1 if not
*/
int main(int argc, char *argv[])
{
	int i, mul;

	i = 1;

	if (argc >= 3)
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
