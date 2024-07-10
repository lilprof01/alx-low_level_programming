#include "main.h"

/**
* str_checker - checks if two strings are the same with each other.
* @s1: first strings base address.
* @s2: second strings base address.
* @i: left index.
* @j: special index in the string.
* Return: 1 if s is a palindrome or 0 if not.
*/
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
* wildcmp - check if strings could be considered identical
* @s1: first strins base address.
* @s2: second strings base address.
* Return: 1 if are considered identical.
*/
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
