#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		/* Check for a loop and break if needed */
		if (count > 30)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
