#include "lists.h"

/**
* free_listint - entry point frees a listint_t list
* @head: is the pointer to the head of the list
*Return: VOID
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
