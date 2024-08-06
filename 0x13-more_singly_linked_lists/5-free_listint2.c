#include "lists.h"

/**
*free_listint2 - entry point frees a listint_t list.
*@head: A pointer to the address of the head of the listint_t list.
*
*Description: Sets head to NULL.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
