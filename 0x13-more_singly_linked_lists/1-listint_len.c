#include "lists.h"

/**
 * listint_len - returns the number of elements in linked list
 * @h: linked list
 * Description: task number 2
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}

	return (num);
}
