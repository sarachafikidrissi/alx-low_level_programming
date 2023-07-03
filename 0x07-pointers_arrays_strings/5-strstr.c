#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that lolcates a substring
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptrh = haystack, *ptrn = needle;

	while (*haystack)
	{
		ptrh = haystack;
		needle = ptrn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);

		haystack = ptrh + 1;
	}
	return (NULL);
}
