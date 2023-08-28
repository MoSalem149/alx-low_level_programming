#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer
 * @index: index of node
 * Description: task number 10
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

