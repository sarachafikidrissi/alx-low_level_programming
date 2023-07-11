#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: an integer input of columns
 * @height: an integer input of rows
 * Return: a pointer to a 2D array, Null if failure
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
