#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 0; /* Flag to check if there are any elements in the hash table */

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			/* If there are elements before, print a comma and space */
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 1;
		}
	}
	printf("}\n");
}
