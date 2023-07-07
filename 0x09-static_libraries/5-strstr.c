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
	for (; *haystack != '\0'; haystack++)
	{
		char *ptrh = haystack, *ptrn = needle;

		while (*ptrh == *ptrn && *ptrn != '\0')
		{
			ptrh++;
			ptrn++;
		}
		if (*ptrn == '\0')
			return (haystack);
	}
	return (NULL);
}
