#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at certain index
 * @head: first node
 * @index: index of the node
 * Description: task number 7
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
