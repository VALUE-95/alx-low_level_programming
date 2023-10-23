#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list
 * @h: Pointer to the head of the list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t vari_able;

	vari_able = 0;

	while (h != NULL)
	{
		vari_able++;
		h = h->next;
	}

	return (vari_able);
}
