#include "lists.h"
/**
 * dlistint_len - returns the num of elems in a d linked list
 * Description: task num 1
 * @h: head of the list
 * Return: the num of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
