#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: pointer to adresse of new node
 * @index: the position of new node
 * @n: the integer to be added to new node
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0, i = 0;

	listint_t *temp, *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	temp = *head;

	while (temp->next != 0)
	{
		temp = temp->next;
		count++;
	}
	if(idx > count || new_node == NULL)
		return (NULL);

	temp = *head;
	
	while(i < idx)
	{
		temp = temp->next;
		i++;
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
