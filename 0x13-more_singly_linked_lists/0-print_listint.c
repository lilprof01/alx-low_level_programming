#include "lists.h"

/**
*print_listint - entry point prints all elements of a list
*@h: is the pointer to the head of the list
*
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodeNum = 0;

	while (h != NULL)
	{
		nodeNum++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodeNum);
}
