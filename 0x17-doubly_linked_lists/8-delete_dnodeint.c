#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
* @head: Double pointer to the head of the doubly linked list.
* @index: Index of the node that should be deleted, starting at 0.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;

if (*head == NULL || head == NULL)
return (-1);

temp = *head;

if (index == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}

while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}

if (temp == NULL)
return (-1);

if (temp->prev != NULL)
temp->prev->next = temp->next;

if (temp->next != NULL)
temp->next->prev = temp->prev;

free(temp);
return (1);
}
