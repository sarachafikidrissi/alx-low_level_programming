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
	void *ptra;

	ptr = malloc(old_size);
	ptra = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		return (ptra);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptra = malloc(new_size);
		if (ptr == NULL)
			return (NULL);

		memcpy(ptra, ptr, old_size);
	}
	return (ptra);
}
