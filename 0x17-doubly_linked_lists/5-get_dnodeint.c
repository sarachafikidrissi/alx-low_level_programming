#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * doubly linked list
 * @head: a pointer to the head node of a doubly linked list
 * @index: the index of the node
 * Return: the nth node or NULL if index dooesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, count = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (index > count)
		return (NULL);
	temp = head;
	while (i <= index - 1)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
