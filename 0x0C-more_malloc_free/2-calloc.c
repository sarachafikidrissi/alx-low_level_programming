#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to an new array, NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}
