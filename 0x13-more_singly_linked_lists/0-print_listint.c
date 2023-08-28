#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Description: task number 0
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
const listint_t *current;
size_t num = 0;

if (h == NULL)
{
return (0);
}

current = h;

do {
printf("%d\n", current->n);
num++;
current = current->next;
} while (current != NULL);

return (num);
}
