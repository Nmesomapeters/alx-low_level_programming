#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: Pointer to the head of the list
 *@str: String to be added to the list
 *Return: NULL.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int lens;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lens = 0; str[lens];)
		lens++;

	new->str = dup;
	new->lens = lens;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
