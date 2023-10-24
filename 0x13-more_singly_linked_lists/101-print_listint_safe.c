#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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
	const listint_t *loop_start = NULL;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;

		if (current == loop_start)
		{
			fprintf(stderr, "-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		if (loop_start == NULL && current != NULL)
			loop_start = current;
	}

	return (count);
}
