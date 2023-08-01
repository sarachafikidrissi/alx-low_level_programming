#include "lists.h"
/**
 *
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *temp;
    int i = 1;
    temp = head;

    while (i <= index)
    {
        temp = temp->next;
        i++;
    }
    if (temp == NULL)
        return (NULL);
    else
        return (temp);
}
