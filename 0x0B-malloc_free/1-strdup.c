#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer that contains a copy of string
 * @str: a pointer to string to be copied
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len ; i++)
	{
		ptr[i] = str[i];
	}
	return (s);
}
