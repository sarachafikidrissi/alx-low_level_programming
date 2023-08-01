#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to node
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp, *next_node;

	temp = head;

	while (temp != 0)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
}
