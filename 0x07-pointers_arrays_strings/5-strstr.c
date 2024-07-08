#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, x = 0;

	while (haystack[i])
	{
		while (needle[x] && (haystack[i] == needle[0]))
		{
			if (haystack[i + x] == needle[x])
				x++;
			else
				break;
		}
		if (needle[x])
		{
			i++;
			x = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
