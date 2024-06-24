#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - entry point prints last digit of random number
*
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int x;
	x = n % 10;

	if (x > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, x);
	}
	else if (x == 0)
	{
		printf("last digit of %d is %d and is zero", n, x);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, x);
	}
	return (0);
}
