#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list
 * @h: pointer to the next node
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	const list_t *temp;

	temp = h;

	while (temp)
	{
		if (temp != 0)
			count++;

		temp = temp->next;
	}
	return (count);
}
