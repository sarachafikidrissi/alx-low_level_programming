#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * 
*/
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
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