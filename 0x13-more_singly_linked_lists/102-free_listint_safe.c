#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *curr, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;
	while (curr != NULL)
	{
		size++;
		tmp = curr;
		curr = curr->next;

		tmp->next = NULL;

		free(tmp);

		if (tmp == curr)
		{
			*h = NULL;
			return (size);
		}
	}

	*h = NULL;
	return (size);
}
