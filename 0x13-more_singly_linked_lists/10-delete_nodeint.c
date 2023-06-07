#include "lists.h"

/**
 * delete_nodeint_at_index - to deletes a node at an index.
 * @head: head
 * @index: index.
 * Return: address.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int j = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (j == index)
		{
			old_node = *head;
			if (j == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			previous_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((j + 1) == index)
			previous_node = *head;
		head = &((*head)->next);
		j++;
	}
	return (-1);
}

/**
 * listint_len - it counts the number of nodes in linked list
 * @h: head.
 * Return: numbers of elements
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
