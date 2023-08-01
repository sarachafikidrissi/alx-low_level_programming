#include "lists.h"
/**
 * delete_nodeint_at_index -  a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to adress of node
 * @index: the position of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *position;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (*head->next == NULL)
	{
		*head == NULL;
		return (-1);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	position = temp->next;
	temp->next = position->next;
	free(position);
	return (1);
}
