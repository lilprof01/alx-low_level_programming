#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**_strdup - returns a pointer to a newly allocated space
*which contains a copy of the string in given parameter
*@str: is the given stringto be coopied
*Return: null if str or a is empty, or pointer to the copy
*/
char *_strdup(char *str)
{
	int len;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	a = (char *)malloc((len + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(a, str);
		return (a);
	}
}
