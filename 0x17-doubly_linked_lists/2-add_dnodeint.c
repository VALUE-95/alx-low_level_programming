#include "lists.h"

/**
 * add_dnodeint - function to add a new node at the beginning of
 * a dlistint_t list.
 * @head: pointer to the pointer to the head of the doubly linked list.
 * @n: value to be assigned to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn; /*nn stands for new node */

	if (head == NULL)
		return (NULL);

	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->prev = NULL;
	nn->next = *head;

	if (*head != NULL)
		(*head)->prev = nn;

	*head = nn;

	return (nn);
}
