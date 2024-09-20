#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a list.
* @h: Double pointer to the head of the doubly linked list.
* @idx: Index where the new node should be added, starting from 0.
* @n: Data (integer) to store in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i = 0;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));  /* Add node at the beginning */

temp = *h;

while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

if (temp == NULL && i < idx - 1)
return (NULL);

if (temp->next == NULL)  /* Add node at the end */
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;

if (temp->next != NULL)
temp->next->prev = new_node;

temp->next = new_node;

return (new_node);
}
