#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index using the key and hash function */
	index = key_index((unsigned char *)key, ht->size);

	/* Traverse the linked list at the index */
	temp = ht->array[index];
	while (temp != NULL)
	{
		/* If key is found, return the associated value */
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	/* Key couldn't be found */
	return (NULL);
}
