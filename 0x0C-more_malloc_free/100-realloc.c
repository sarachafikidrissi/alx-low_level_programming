#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer that pointes to old block of memory
 * @old_size: the size of the old memory allocated
 * @new_size: the size of the new located memory
 * Return: pointer to the now allocating space, Null if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_loc, *ptra;
	unsigned int i = 0;

	ptr = malloc(old_size);

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_loc = malloc(new_size);
	ptra = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_loc[i] = ptra[i];
	free(ptr);
	return (new_loc);
}
