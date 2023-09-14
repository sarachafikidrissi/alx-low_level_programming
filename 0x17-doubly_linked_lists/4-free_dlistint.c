#include "lists.h"

/**
 * free_dlistint - a function that frees a doubly linked list
 * @head: the pointer to head of a doubly linked list
 * Return : Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
