#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**string_nconcat - concatenates two strings
*@s1: is the first string
*@s2: is the second string
*@n: is the amount of bytes from s2 to be concatenated
*Return: pointer to the new memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0, len;
	char *a;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	if (n >= len2)
	{
		n = len2;
	}
	len = len1 + n;
	a = (char *)malloc(sizeof(char) * (len + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		a[len1 + i] = s2[i];
	}
	a[len] = '\0';
	return (a);
}
