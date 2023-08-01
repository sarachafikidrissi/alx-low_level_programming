#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: pointer to adresse of new node
 * @idx: the position of new node
 * @n: the integer to be added to new node
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (; idx > 1; idx--)
	{
		temp = temp->next;
		if (!temp)
		{
			free(temp);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

