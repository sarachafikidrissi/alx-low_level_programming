#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  a function that concatenates all the arguments of your program
 * @ac: counts number of arguments
 * @av: contains the arguments passed to your program
 * Return: pointer to a new string that contains all arguments
 * , returns NULL on faillure
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int len = 0, i = 0, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	len++;
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}

	new_str[k] = '\0';
	return (new_str);
}
