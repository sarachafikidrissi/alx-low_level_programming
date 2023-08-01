#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: pointer to adress of node
 * Return: head node's data (n), Null if list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (*head == NULL)
		return (0);

	temp = *head;
	a = temp->n;
	*head = temp->next;
	free(temp);
	return (a);
}
