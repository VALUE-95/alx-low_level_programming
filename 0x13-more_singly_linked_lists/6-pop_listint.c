#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list
 * Return: The head node's data (n), or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int pop_data = 0;
	listint_t *tempo;

	if (*head != NULL)
	{
		pop_data = (*head)->n;
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
	}

	return (pop_data);
}
