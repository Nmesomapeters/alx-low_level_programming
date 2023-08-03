#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint -it  prints a listint_t linked list.
 * @head: head
 * Return: pichu
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t pichu = 0;
	const listint_t *aux_node = head;

	if (!head)
		exit(98);

	while (aux_node)
	{
		printf("[%p] %i\n", (void *)aux_node, aux_node->n);
		aux_node = aux_node->next;
		pichu++;
	}
	return (pichu);
}
