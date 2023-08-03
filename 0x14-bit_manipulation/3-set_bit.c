#include "main.h"
/**
 * set_bit - a function that sets a bit to 1 at a given index
 * @n: a pointer to that number
 * @index: index of bit to be set to 1
 * Return: number
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long mask = 1 << index;
    unsigned int long bits = sizeof(*n) * 8;

	if (index >= bits)
		return (-1);
		
	*n = *n | mask;

    return (1);
}
