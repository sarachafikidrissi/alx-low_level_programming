#include "main.h"
/**
 * clear_bit - a function that clears a bit at a given index
 * @n: pointer to a given number
 * @index: index of bit to be clear
 * Return: 1 on success , -1 if error occurs
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = sizeof(*n) * 8;

	unsigned long int mask = 1UL << index;

	if (index >= bits)
		return (-1);

	*n = *n & ~mask;

	return (1);
}
