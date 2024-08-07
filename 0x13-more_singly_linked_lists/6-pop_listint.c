#include "lists.h"

/**
*pop_listint - entry point deletes the head node of a linked list
*@head : is the pointer to the head of the linked list
*Return: n if success or, 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
	{
		return (0);
	}

	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
