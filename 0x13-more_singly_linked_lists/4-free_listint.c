#include "lists.h"

/**
 * free_listint - it frees linked list
 * @head: head.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
