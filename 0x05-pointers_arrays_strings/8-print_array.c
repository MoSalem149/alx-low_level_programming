#include "main.h"
/**
 * print_array - prints a elements of a an array of integers.
 * Description: prints a elements of a an array of integers.
 * @n: elment input
 * @a: string input
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
