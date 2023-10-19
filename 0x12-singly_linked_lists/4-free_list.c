#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *c;

	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c->str);
		free(c);
	}
}
