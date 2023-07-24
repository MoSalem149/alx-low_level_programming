#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * Description:  prints a string, in reverse, followed by a new line.
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int longs = 0;
	int i;

	while (*s != '\0')
	{
		longs++;
		s++;
	}
	s--;
	for (i = longs; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
