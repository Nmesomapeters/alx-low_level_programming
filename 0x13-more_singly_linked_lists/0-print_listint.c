#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Head of list.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t counter = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		counter += 1;
		cursor = cursor->next;
	}
	return (counter);
}
