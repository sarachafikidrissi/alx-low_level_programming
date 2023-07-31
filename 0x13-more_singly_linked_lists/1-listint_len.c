#include "lists.h"
/**
 * listint_len - a function that returns number of nodes
 * @h: pointer to node
 * Return: number of node
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}