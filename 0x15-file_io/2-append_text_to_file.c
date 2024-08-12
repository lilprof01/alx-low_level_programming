#include "main.h"

/**
*append_text_to_file - entry point appends text at the end of a file
*@filename: is the pointer to the file name
*@text_content: is the string to append to the end of the file
*Return: 1 if file exists, or -1 if function fails, does not exist or fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wri;
	int nLtrs;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		for (nLtrs = 0; text_content[nLtrs]; nLtrs++)
			;

		wri = write(op, text_content, nLtrs);

		if (wri == -1)
			return (-1);
	}

	close(op);

	return (1);
}
