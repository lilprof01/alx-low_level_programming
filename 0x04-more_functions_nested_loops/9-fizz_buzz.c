#include "main.h"
#include <stdio.h>

/**
*main - entry point prints number 1 to 100
*but prints fizz for all multiples of 3 and buzz for all multiples of 5
*and then prints fizzbuzz for multiples of both 3 and 5
*Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
