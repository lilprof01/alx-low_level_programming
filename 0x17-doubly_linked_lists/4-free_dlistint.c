#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - entry point frees a dlistint_t doubly linked list.
* @head: Pointer to head of the list to be freed.
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
