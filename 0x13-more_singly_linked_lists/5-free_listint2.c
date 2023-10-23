#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to a pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	while (*head != NULL)
	{
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
	}
	*head = NULL;
}
