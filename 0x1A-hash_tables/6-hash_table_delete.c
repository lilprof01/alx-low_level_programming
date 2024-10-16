#include "hash_tables.h"

/**
 * hash_table_delete - entry point deletes hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx])
		{
			free(ht->array[idx]->value);
			free(ht->array[idx]->key);
			free(ht->array[idx]);
			ht->array[idx] = ht->array[idx]->next;
		}
	}
	free(ht->array);
	free(ht);
}
