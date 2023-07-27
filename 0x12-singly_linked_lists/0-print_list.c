#include "main.h"
/**
  * print_list - a function that prints the elements of node
  * @h: pointer to the first node
  * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	const list_t *temp;

	temp = h;

	while (temp != 0)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", temp->len, temp->str);

		count++;
		temp = temp->next;
	}
	return (count);
}
