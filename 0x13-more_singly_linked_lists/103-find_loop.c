#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list
 * Return: The address of the node, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *link = head;
	listint_t *hello = head;

	while (hello && hello->next)
	{
		link = link->next;
		hello = hello->next->next;

		if (link == hello)
		{
			link = head;
			while (link != hello)
			{
				link = link->next;
				hello = hello->next;
			}
			return (hello);
		}
	}
	return (NULL);
}
