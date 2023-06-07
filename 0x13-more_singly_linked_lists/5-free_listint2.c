#include "lists.h"

/**
 *free_listint2 - it frees listint_t list
 *@head:  head of the list
 *Description: sets the head to NULL.
 *Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
