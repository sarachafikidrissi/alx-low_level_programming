#include "lists.h"

/**
 * add_dnodeint - a function that adds a node at begining of
 * a doublty linked list
 * @head: double pointer to adresse of first node
 * @n: the number of position of the new node
 * Return: adress of new element, otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
