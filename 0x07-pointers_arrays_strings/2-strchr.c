#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locate a character
 * @s: an input string to search in
 * @c: the character to search for
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
