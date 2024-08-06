#include "lists.h"

/**
*free_listp2 - entry point frees a linked list
*@head: is the head of a list.
*
*Return: VOID.
*/
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
*free_listint_safe - entry point frees a linked list.
*@h: is the head of a list.
*
*Return: size of the freed list.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t nodeNum = 0;
	listp_t *hptr, *new, *add;
	listint_t *cur;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nodeNum);
			}
		}

		cur = *h;
		*h = (*h)->next;
		free(cur);
		nodeNum++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nodeNum);
}
