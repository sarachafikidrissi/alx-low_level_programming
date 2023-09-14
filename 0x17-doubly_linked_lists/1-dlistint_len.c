#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked list
 * @h: a pointer to the first node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	if (h == NULL)
		return (0);
	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
