#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Counts the number of unique nodes
 * @head: A pointer
 * Description: task number 12
 * Return:  0 or unique nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *check;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		check = head;

		while (check != current)
		{
			if (check == current->next)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				exit(98);
			}
			check = check->next;
		}

		current = current->next;
		count++;
	}

	return (count);
}
