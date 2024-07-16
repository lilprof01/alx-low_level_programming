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
	int i, j, len1, len2, len;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = len1 = len2 = 0;
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}
	len = len1 + len2;
	a = (char *)malloc((len + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			a[i] = s1[i];
		}
		for (j = 0; j < len2; j++, i++)
		{
			a[i] = s2[j];
		}
		a[len] = '\0';
	}
	return (a);
}
