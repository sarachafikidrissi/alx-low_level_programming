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
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		position = temp;
		position = position->next;
		temp->next = position->next;
		free(position);
	}
	return (1);
}
