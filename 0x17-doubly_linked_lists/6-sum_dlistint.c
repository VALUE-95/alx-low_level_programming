#include "lists.h"

/**
 * sum_dlistint - function to return the sum of all the data (n)
 * of a dlistint_t list.
 * @head: pointer to the head of the doubly linked list.
 *
 * Return: the sum of all the data, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
