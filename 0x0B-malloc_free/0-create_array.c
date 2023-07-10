#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates arrays of chars 
 * @size: size to be reserved in memory
 * @c: specified character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;
	ptr = (char*) malloc(size * sizeof(char));

	if (ptr == 0 || size == 0)
		return(NULL);
	for (i=0; i<size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
