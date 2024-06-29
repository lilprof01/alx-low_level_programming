#include <stdio.h>

/**
*main - entry point prints number 1 to 100
*but prints fizz for all multiples of 3 and buzz for all multiples of 5
*and then prints fizzbuzz for multiples of both 3 and 5
*Return: Always 0 (success)
*/
int main(void)
{
	char i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("fizzbuzz");
	}
	else if (i % 3 == 0)
	{
		printf("fizz");
	}
	else if (i % 5 == 0)
	{
		printf("buzz");
	}
	else
	{
		printf("%d", i);
	}
	printf(" ");
	}
	printf("\n");
	return (0);
}