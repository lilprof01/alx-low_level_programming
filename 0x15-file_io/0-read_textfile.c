#include "main.h"

/**
*read_textfile - entry point reads a text file and prints it to POSIX stdout
*@filename: is the pointer to file name
*@letters: is the numbers of letters to be read and printed
*Return: numbers of letters printed. If it fails, returns 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t re, wri;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		return (0);
	}
	re = read(op, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, re);

	close(op);

	free(buffer);

	return (wri);
}
