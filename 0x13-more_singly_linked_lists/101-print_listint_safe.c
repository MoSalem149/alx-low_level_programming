#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer
 * Description: task number 12
 * Return:  0 or unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head;
	hare = head;

	do {

		tortoise = tortoise->next;
		hare = (hare->next)->next;

	if (!tortoise || !hare)
		return (0);

	} while (tortoise != hare);

	hare = head;

	while (tortoise != hare)
	{
		nodes++;
		tortoise = tortoise->next;
		hare = hare->next;
	}

	return (nodes);
}

/**
 * print_listint_safe - Prints a listint_t
 * @head: A pointer
 * Description: task number 12
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	nodes = looped_listint_len(head);

	for (; nodes > 0; nodes--)
	{
	printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (nodes);
}
