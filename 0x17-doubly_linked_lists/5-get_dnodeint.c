#include "lists.h"
/**
 * get_dnodeint_at_index - returns the idx 9 node of a dlistint_t linked list.
 * Description: task num 5
 * @head: pointer to head of the list
 * @index: idx of the node to search for, starting from 0
 * Return: 9 node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);
	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
