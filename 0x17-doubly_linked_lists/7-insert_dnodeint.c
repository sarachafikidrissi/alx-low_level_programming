#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a node
 * at a given position
 * @h: double pointer to head node of double linked list
 * @idx: the position of newnode
 * @n: the data to be in sert to newnode
 * Return: adresse of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (h == NULL || (*h) == NULL)
		*h = new_node;
	else
	{
		temp = *h;
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			new_node->prev = temp->prev;
		else
			new_node->prev = temp;
		if (idx == i)
			temp->next = new_node, new_node->prev = temp;
		else if (idx == i - 1)
		{
			if (temp->prev)
				temp->prev->next = new_node;
			else
				*h = new_node;
			temp->prev = new_node;
			new_node->next = temp;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
