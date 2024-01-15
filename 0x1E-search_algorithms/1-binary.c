#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * binary_search - A function that search of a target value
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return:  the first index where value is located , otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t i;
	int mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;

	}

	return (-1);
}

