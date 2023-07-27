#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: a pointer to the adress of the added node
 * @str: sting to be printed in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	else
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
