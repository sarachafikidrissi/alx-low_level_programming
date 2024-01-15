#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * linear_search - A function that search for a specific value
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return:  the first index where value is located , otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);
}
