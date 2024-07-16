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
	int i, len;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	a = (char *)malloc((len + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			a[i] = str[i];
			a[len] = '\0';
		}
		return (a);
	}
}
