#include "main.h"

/**
*create_file - entry point creates a file.
*@filename: is the pointer to the file namee
*@text_content: is the pointer to a string to write to the file
*Return: 1 if success, or - 1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int op;
	int wri;
	int nLtrs;

	if (!filename)
	{
		return (-1);
	}
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (nLtrs = 0; text_content[nLtrs]; nLtrs++)
		;

	wri = write(op, text_content, nLtrs);

	if (wri == -1)
	{
		return (-1);
	}
	close(op);

	return (1);
}
