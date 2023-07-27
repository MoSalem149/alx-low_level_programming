#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int m, y, x;

	m = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (m < size)
	{
		y = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
			{
				printf("%02x", *(b + m + x));
			}
			else
			{
				printf(" ");
			}
			if (x % 2)
			{
				printf(" ");
			}
		}

		for (x = 0; x < y; x++)
		{
			int c = *(b + m + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		m += 10;
	}
}
