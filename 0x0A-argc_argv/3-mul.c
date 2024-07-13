#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*mul - multiplies two numbers
*@argc:
*@argv:
*Return:
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
