#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *temp, *next_node;

	temp = head;

	while (temp != 0)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
}
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
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;
	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;

		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}
