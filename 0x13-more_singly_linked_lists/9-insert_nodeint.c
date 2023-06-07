#include "lists.h"

/**
 * insert_nodeint_at_index -  nth node of a linked list.
 * @head: head.
 * @idx: index.
 * @n: content of the new node.
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int j = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (j == idx)
		{
			if (j == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = new_node;
			return (new_node);
		}
		else if ((j + 1) == idx)
			previous_node = *head;
		head = &((*head)->next);
		j++;
	}
	return (NULL);
}

/**
 * listint_len - to count the number of nodes in a linked list.
 * @h: head.
 * Return: counter
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
