#include "lists.h"

/**
 * add_node - add node
 * @head: head of node
 * @str: store sstring
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	unsigned int i, c = 0;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	nn->len = c;
	nn->next = *head;
	*head = nn;
	return (*head);
}
