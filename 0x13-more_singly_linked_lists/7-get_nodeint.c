#include "lists.h"

/**
*get_nodeint_at_index - entry point returns the nth node of a linked list
*@head: is the pointer to the head of a list
*@index: is the index of the node
*
*Return: NULL if node doesnt exist at nth node
*or the located node if it exists
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i < index) && (head != NULL); i++)
	{
		head = head->next;
	}

	return (head);
}
