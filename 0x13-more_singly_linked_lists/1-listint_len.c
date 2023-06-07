#include "lists.h"

/**
 * listint_len - it helps to counts the number of nodes in a linked list.
 * @h: head of list.
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t counter = 0;

	while (cursor != NULL)
	{
		counter += 1;
		cursor = cursor->next;
	}
	return (counter);
}
