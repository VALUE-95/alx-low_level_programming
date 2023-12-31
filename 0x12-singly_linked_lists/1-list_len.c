#include "lists.h"

/**
 * list_len - the length of a list
 * @h: head node
 * Return: the head of the node
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
