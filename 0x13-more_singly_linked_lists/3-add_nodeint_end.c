#include "lists.h"
/**
 * add_nodeint_end - a function that adds
 * a new node at the end of a listint_t list
 * @head: pointer to the adresse of newnode
 * @n: the number to be printed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;

		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
