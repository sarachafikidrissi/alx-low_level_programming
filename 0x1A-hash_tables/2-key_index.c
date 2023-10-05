#include "hash_tables.h"

/**
 * key_index - A function that gives the index of key
 * @key: a pointer to the key
 * @size: size of hash table
 * Return: key index on Success, 0 otherwise
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key)
		return (0);

	index = hash_djb2(key) % size;

	return (index);
}

