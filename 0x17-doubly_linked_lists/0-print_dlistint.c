#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 * @h: Pointer to the head node of doubly linked list.
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr && ptr->prev)
		ptr = ptr->prev;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
