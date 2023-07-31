#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * pripnt_listint - a function that prints the elements of a node
 * @h: a pointer to the first node
 * Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0:

	const listint_t *temp;

	temp = h;

	while (temp != 0)
	{
		printf("%d", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
