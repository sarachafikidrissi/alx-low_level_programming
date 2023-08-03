#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to node
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *next_node = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (temp && next_node && next_node->next && head)
	{
		temp = temp->next;
		next_node = next_node->next->next;

		if (temp == next_node)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	head = NULL;
	return (count);
}
