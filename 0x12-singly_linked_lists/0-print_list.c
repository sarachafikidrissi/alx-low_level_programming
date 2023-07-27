#include "lists.h"
/**
  * print_list - a function that prints the elements of node
  * @h: pointer to the first node
  * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("[%u]", h->len);
		if (h->str == NULL)
			printf("(nil)\n");

		else
			printf("%s\n", h->str);

		h = h->next;
		count++;
	}
	return (count);
}
