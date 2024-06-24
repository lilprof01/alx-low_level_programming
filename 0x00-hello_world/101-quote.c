#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point prints the input message
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, strlen(str));
	return (1);
}
