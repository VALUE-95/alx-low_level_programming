#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: Pointer to the head of the list
 * Return: The sum of all the data, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int value = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		value += curr->n;
		curr = curr->next;
	}

	return (value);
}
