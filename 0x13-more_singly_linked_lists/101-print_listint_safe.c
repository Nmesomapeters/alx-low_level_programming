#include "lists.h"

/**
 * print_listint_safe - it prints all the elements in a linked list
 * @head: head.
 * Return:  number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t **ptrs;
	unsigned int list_len = listint_len(head);
	size_t counter = 0;

	ptrs = malloc(sizeof(listint_t) * list_len);
	if (ptrs == NULL)
		exit(98);
	while (cursor == 0)
	{
		if (check_ptr(cursor, ptrs, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		counter += 1;
		cursor = cursor->next;
	}
	return (counter);
}

/**
 * listint_len - it counts number of nodes in a linked list
 * @h: head.
 * Return: counter.
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

/**
 * check_ptr - Checks for a pointer in an array.
 * @ptr: Pointer.
 * @array: arrays.
 * @size: size.
 * Return: 1 on succes and 0 on fail.
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
