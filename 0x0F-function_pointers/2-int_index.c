#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: a pointer to an array
 * @size: size of array
 * @cmp: pointer to a function
 * Return: index of array , -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	if (i == size)
		return (-1);

	return (-1);
}
