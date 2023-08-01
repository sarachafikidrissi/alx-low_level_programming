#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list
 * @head: pointer to node
 * @index: position of a node
 * Return : node at index position
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i = 1;

	temp = head;

	while (i <= index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
