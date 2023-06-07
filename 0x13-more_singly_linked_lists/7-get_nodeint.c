#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a linked list.
 * @head: head.
 * @index: index.
 * Return: address.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j <= index)
		{
			if (j == index)
			{
				cursor = head;
				break;
			}
			head = head->next;
			j++;
		}
		else
			return (NULL);
	}
	return (cursor);
}
