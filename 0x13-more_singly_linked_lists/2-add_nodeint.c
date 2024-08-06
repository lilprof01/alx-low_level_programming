#include "lists.h"

/**
*add_nodeint - add a new node at the beginning of a linked list
*@head: is the poniter to head of the list
*@n: is the number of element
*
*Return: NULL if failure or, address of the new element if success
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
