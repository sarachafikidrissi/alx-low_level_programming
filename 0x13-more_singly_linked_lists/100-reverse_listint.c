#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: pointer to node
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;
	prevnode = NULL;

	if (*head == NULL)
		return (NULL);
	while(*head)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
