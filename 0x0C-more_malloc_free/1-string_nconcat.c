#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: an input string
 * @s2: an input string
 * @n: number of bytes
 * Return: a pointer to a newly string, if failure return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	str = malloc((len1 + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1 + n; i++)
	{
		if (i < len1)
			str[i] = *s1, s1++;
		else
			str[i] = *s2, s2++;
	}
	str[i] = '\0';
	return (str);
}
