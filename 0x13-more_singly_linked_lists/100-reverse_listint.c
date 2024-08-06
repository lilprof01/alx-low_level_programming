#include "lists.h"

/**
*reverse_listint - entry point reverses a linked list
*@head: is the pointer to the head of a list
*Return: pointer to the first node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *n;

	x = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = n;
	}

	*head = x;
	return (*head);
}
