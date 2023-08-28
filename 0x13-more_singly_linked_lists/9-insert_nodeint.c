#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node
 * @head: pointer to the first node
 * @idx: index
 * @n: data to insert
 * Description: task number 9
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (current)
	{
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
