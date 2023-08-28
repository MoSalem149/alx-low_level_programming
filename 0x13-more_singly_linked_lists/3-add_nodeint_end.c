#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Description: task number 3
 * Return: pointer to the new node or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
