#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *dark, *light;
	size_t vari_able = 0;

	dark = head;
	light = head;

	while (dark && light && light->next)
	{
		printf("[%p] %d\n", (void *)dark, dark->n);
		vari_able++;
		dark = dark->next;
		light = light->next->next;

		if (dark == light)
		{
			printf("[%p] %d\n", (void *)dark, dark->n);
			printf("-> [%p] %d\n", (void *)light, light->n);
			exit(98);
		}
	}

	while (dark)
	{
		printf("[%p] %d\n", (void *)dark, dark->n);
		vari_able++;
		dark = dark->next;
	}

	return (vari_able);
}
