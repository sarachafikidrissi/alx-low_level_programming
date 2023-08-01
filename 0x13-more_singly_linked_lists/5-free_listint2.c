#include "lists.h"
/**
 * free_loistint2 - a function that frees a listint_t list and
 * sets the head to NULL
 * @head: a pointer to node
 * Return : Nothing
*/
void free_listint2(listint_t **head)
{
    listint_t *temp, *next_node;

	temp = *head;

	while (temp != 0)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
    *head = NULL;
}
