#include "lists.h"

/**
 *free_listint2 - it frees listint_t list
 *@head:  head of the list
 *Description: sets the head to NULL.
 *Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
