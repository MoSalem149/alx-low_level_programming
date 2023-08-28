#include "lists.h"

/**
 * sum_listint - calculates the sum
 * @head: first node
 * Description: task number 8
 * Return: the sum of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
