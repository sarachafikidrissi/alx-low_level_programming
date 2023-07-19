#include "function_pointers.h"
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

	if (size == 0 || cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}
	return (0);
}
