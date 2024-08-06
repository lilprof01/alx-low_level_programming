#include "lists.h"

/**
 * sum_listint - entry point returns the sum of all the data in a list
 * @head: is the pointer to the head of a list
 * Return: sum of all the data or, 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
