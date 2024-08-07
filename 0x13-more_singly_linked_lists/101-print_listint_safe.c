#include "lists.h"

/**
*free_listp - entry point frees a linked list
*@head: is the pointer to the head of the list.
*
*Return: VOID.
*/
void free_listp(listp_t **head)
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
 * print_listint_safe - entry point prints a linked list.
 * @head: is the pointer to the head of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeNum = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nodeNum);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodeNum++;
	}

	free_listp(&hptr);
	return (nodeNum);
}
