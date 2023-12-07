#include "lists.h"

/**
 * get_dnodeint_at_index - funtion to returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to the head of the doubly linked list.
 * @index: index of the node to retrieve, starting from 0.
 *
 * Return: the nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c; /* c stands for count */

	c = 0;

	while (head != NULL)
	{
		if (c == index)
			return (head);

		head = head->next;
		c++;
	}

	return (NULL);
}
