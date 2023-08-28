#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 * Description: task number 13
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next_node;

	if (!h)
		return (0);

	current = *h;

	while (current)
	{
		len++;
		next_node = current->next;
		free(current);

		if (next_node >= current)
			break;
		current = next_node;
	}

	*h = NULL;

	return (len);
}
