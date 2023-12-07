#include "lists.h"

/**
 * add_dnodeint_end - function to add a new node at the end
 * of a dlistint_t list.
 * @head: pointer to the pointer to the head of the doubly linked list.
 * @n: value to be assigned to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn; /* nn stands for new node */
	dlistint_t *tmp; /* tmp stands for temporary */

	if (head == NULL)
		return (NULL);

	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		nn->prev = NULL;
		*head = nn;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = nn;
		nn->prev = tmp;
	}

	return (nn);
}
