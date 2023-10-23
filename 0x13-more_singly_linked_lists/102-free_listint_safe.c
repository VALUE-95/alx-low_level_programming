#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *tempo;
	size_t vari_able = 0;

	curr = *h;

	while (curr)
	{
		vari_able++;
		if (curr->next >= curr)
		{
			tempo = curr;
			*h = NULL;
			return (vari_able);
		}

		tempo = curr;
		curr = curr->next;
		free(tempo);
	}

	*h = NULL;
	return (vari_able);
}
