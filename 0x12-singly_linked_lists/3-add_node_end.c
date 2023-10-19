#include "lists.h"

/**
 * add_node_end - adds node to the end
 * @head: head of the node
 * @str: a string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn, *a;
	unsigned int i, c = 0;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	nn->len = c;
	nn->next = NULL;
	a = *head;
	if (a == NULL)
		*head = nn;
	else
	{
		while (a->next != NULL)
			a = a->next;
		a->next = nn;
	}
	return (*head);
}
