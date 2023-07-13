#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: an input of type integer
 * Return: a pointer to the allocated memory if success, NULL if failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
