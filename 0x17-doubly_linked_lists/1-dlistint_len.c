#include "lists.h"

/**
 * dlistint_len - function to return the number of elements
 * in a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nc = 0; /*nc stands for node count */

	while (h != NULL)
	{
		h = h->next;
		nc++;
	}

	return (nc);
}
