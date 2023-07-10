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
	char *create_array;

	if (size == 0)
		return (NULL);
	
	while (i <= size)
	{
		create_array = (char*) malloc(size * sizeof(char));

		if (create_array == 0)
			return(NULL);
		
		create_array[i] = c;
		i++;
	}
	return (create_array);
}
