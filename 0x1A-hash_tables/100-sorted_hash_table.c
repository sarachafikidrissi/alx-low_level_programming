#include "shash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - A function that creates a hash table
 * @size: the size of hash table
 * Return: a pointer to the created hash table, NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *new_table = NULL;

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (; i < size; i++)
		(new_table->array)[i] = NULL;
	return (new_table);
}

/**
 * shash_table_set - A function that sets a key value pair to a hash table
 * @key: the key to set
 * @value: the value to set
 * @ht: the hash table
 * Return: 1 on success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *value_dup = NULL, *key_dup = NULL;
	shash_node_t *new_node = NULL, *tmp_node = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	value_dup = strdup(value);
	key_dup = strdup(key);
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] != NULL)
	{
		tmp_node = (ht->array)[index];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, key_dup) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = value_dup;
				free(key_dup);
				free(new_node);
				return (1);
			}
			tmp_node = tmp_node->next;
		}
		tmp_node = (ht->array)[index];
		new_node->next = tmp_node;
		(ht->array)[index] = new_node;
	}
	else
		(ht->array)[index] = new_node;
	return (1);
}



/**
 * shash_table_get - A function that gets the value associated to a key
 * @ht: the hash table
 * @key: the key associated to the value
 * Return: the value, NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *value = NULL;
	shash_node_t *node;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);

	node = ht->array[index];
	while (!value)
	{
		if (strcmp(node->key, key) == 0)
			value = node->value;
		node = node->next;
	}
	return (value);
}

/**
 * shash_table_print - A function that prints the content of a hash table
 * @ht: the hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0, last_pos = 0;
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; i < ht->size - 1; i++)
		{
			if (ht->array[i] != NULL)
				last_pos = i;
		}

		for (i = 0; i <= last_pos; i++)
		{
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (i < last_pos - 1)
					printf(", ");
			}

		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that deletes a hash table.
 * @ht: thet hash table to be deletes
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *next_node = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				while (node)
				{
					next_node = node->next;
					if (node->value)
						free(node->value);
					if (node->key)
						free(node->key);
					free(node);
					node = next_node;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
