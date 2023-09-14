#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n) of
 * a doubly linked list
 * @head: the pointer to first node of a doubly linked list
 * Return: sum of all data, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
