#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name
 * @name: the name to be printed
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(char *name);
}
