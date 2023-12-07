#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function to print all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nc = 0; /*nc stands for node count */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nc++;
	}

	return (nc);
}
