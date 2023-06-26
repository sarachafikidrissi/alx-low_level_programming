#include "main.h"
/**
 * swap_int - a function that swaps the value of 2 integers
 * @a: the first integerto be swaped
 * @b: the second integer to eb swaped
 * Return: 0 is successful
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
