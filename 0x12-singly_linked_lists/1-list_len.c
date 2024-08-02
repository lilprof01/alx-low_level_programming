#include "lists.h"
/**
 * list_len - entry point returns then number of elements in a list.
 * @h: is the singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
