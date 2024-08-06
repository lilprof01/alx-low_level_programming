#include "lists.h"

/**
*add_nodeint_end - entry point adds a node to the end of a linked list
*@head: is the pointer to the head of the list
*@n: is the number to be used as content
*
*Return: NULL if function fails, or the address of the new element if success
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
