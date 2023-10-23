#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index.
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *tempo;
	unsigned int vari_able = 0;

	if (curr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (vari_able < index - 1 && curr != NULL)
	{
		curr = curr->next;
		vari_able++;
	}

	if (curr == NULL || curr->next == NULL)
		return (-1);

	tempo = curr->next;
	curr->next = tempo->next;
	free(tempo);

	return (1);
}
