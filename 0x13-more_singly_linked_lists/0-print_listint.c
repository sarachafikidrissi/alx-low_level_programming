#include "lists.h"
/**
 * print_listint - a function that prints the elements of a node
 * @h: a pointer to the first node
 * Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
