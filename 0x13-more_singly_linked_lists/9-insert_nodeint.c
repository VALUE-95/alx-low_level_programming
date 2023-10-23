#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be added (starting at 0)
 * @n: Integer value to be stored in the new node
 * Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *added_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;
	unsigned int vari_able = 0;

	if (added_node == NULL)
		return (NULL);

	added_node->n = n;

	if (idx == 0)
	{
		added_node->next = *head;
		*head = added_node;
		return (added_node);
	}

	while (curr != NULL && vari_able < idx - 1)
	{
		curr = curr->next;
		vari_able++;
	}

	if (curr == NULL)
	{
		free(added_node);
		return (NULL);
	}

	added_node->next = curr->next;
	curr->next = added_node;

	return (added_node);
}
