#include "lists.h"

/**
 * add_nodeint - Adds node to the beginning of a linked list.
 * @head: Points to the head of the list.
 * @n: Integer to used.
 * Return: Address of newly added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
