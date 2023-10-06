#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - A fucntion that adds an element to a hash table.
 * @ht: the hash table to be added.
 * @key: the key string to be added
 * @value: the value string to be added
 * Return: 1 on Success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newnode = NULL, *temp = NULL;
	char *key_dup = NULL, *value_dup = NULL;

	if (!ht || !key || !value)
		return (0);
	if (strlen(key) == 0)
		return (0);
	newnode = malloc(sizeof(hash_node_t));

	if (!newnode)
		return (0);
	newnode->key = key_dup;
	newnode->value = value_dup;
	newnode->next = NULL;
	index = key_index((unsigned char *)key, ht->size);

	if ((ht->array)[index] != NULL)
	{
		temp = (ht->array)[index];
		while (temp)
		{
			if (strcmp(temp->key, key_dup) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = value_dup;
				free(value_dup);
				free(newnode);
				return (1);
			}
			temp = temp->next;
		}
		temp = (ht->array)[index];
		newnode->next = temp;
		(ht->array)[index] = newnode;
	}
	else
		(ht->array)[index] = newnode;

	return (1);
}
