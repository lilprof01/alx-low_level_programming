#include "lists.h"

/**
*listint_len - entry point returns the number
*of elements in a linked list
*@h: is the pointer to the head of the list
*
*Return: numbers of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nodeNum = 0;

	while (h != NULL)
	{
		nodeNum++;
		h = h->next;
	}
	return (nodeNum);
}
