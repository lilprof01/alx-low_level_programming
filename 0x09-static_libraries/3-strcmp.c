#include "main.h"

/**
*_strcmp - entry point compares two strings
*@s1: is the pointer to first string
*@s2: is the pointer to the second string
*Return: value less than 0 if string is lesser
*or value greater than 0 if string is greater
*or 0 if strings are equal
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int cmp_value;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	cmp_value = s1[i] - s2[i];
	return (cmp_value);
}
