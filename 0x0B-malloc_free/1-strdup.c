#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer that contains a copy of string
 * @str: a pointer to string to be copied
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	unsigned int len = 0;
	unsigned int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	s = (char *) malloc((len + 1) * sizeof(char));
	if (s != NULL)
	{
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
	}
	else
	{
		return (NULL);
	}
}
