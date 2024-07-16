#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**str_concat - concatenates two strings & stores in allocated memory
*@s1: is the first string
*@s2: is the second string
*Return: NULL if memory allocation fails, or pointer to the allocated memory
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	a = (char *)malloc((len + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(a, s1);
		strcat(a, s2);
	}
	return (a);
}
