#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer
 * Description: task number 11
 * Return: pointer also
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node = NULL;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;

	return (*head);
}
