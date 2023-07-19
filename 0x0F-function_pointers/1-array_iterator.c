#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array
 * @action: pointer to the function you need to use
 * @size: size of the array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
