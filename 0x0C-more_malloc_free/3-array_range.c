#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum integer
 * @max: the maximum integer
 * Return: a pointer to an array of integers, NULL if failure
 */
int *array_range(int min, int max)
{
	int *array;
	int n, i;

	n = max - min;

	if (min > max)
		return (NULL);

	array = malloc((n + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
