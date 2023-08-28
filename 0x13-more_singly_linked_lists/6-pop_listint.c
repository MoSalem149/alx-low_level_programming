#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer in the first element in the list
 * Description: task number 6
 * Return: data or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;


	if (!head || !*head)
		return (0);

	temp = *head;
	num = temp->n;

	*head = temp->next;

	free(temp);

	return (num);
}
