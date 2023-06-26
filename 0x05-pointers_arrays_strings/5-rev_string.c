#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: the string to be reversed
 * Return: 0 is successful
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char r;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		r = s[i];
		s[i++] = s[len];
		s[len] = r;
	}
}
