#include "lists.h"

/**
 * print_dlistint -  function that prints all
 * the elements of a dlistint_t list.
 * @h: adress of the first node
 * Return: numbers of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;

	if (h == NULL)
		return (0);

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
