#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *paradigm;
	listint_t *node;

	paradigm = NULL;
	node = NULL;

	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = paradigm;
		paradigm = *head;
		*head = node;
	}

	*head = paradigm;
	return (*head);
}
