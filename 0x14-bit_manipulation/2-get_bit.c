#include "main.h"
/**
 * get_bit -  a function that returns the value of
 * a bit at a given index.
 * @n: a given number
 * @index: the index of bit to get
 * Return: the value of the bit at index index or
 * -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;
	unsigned int bits = sizeof(n);

	if (index > bits)
		return (-1);

	if (n & mask)
		return (1);
	else
		return (0);
}
