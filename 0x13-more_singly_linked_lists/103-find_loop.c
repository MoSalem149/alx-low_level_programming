#include "lists.h"

/**
 * find_listint_loop - loop the list
 * @head: linked list
 * Description: task number 14
 * Return: address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (fast);
		}
	}

	return (NULL);
}
