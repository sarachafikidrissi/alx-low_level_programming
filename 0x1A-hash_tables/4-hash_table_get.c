#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - A fucntion that gets the value associated with a key
 * from a hash table.
 * @ht: the hash table to look from.
 * @key: the key associated to value we are looking for.
 * Return: The value associated to the key , NULL if not not found.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;
	char *value = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (value == NULL)
	{
		if (strcmp(temp->key, key) == 0)
			value = temp->value;
		temp = temp->next;
	}
	return (value);
}
