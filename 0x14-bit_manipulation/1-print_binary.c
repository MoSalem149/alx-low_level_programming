#include "main.h"

/**
 * print_binary - prints the binary equ of a dec num
 * @n: number to print
 * Description: task number 1
 * Return: the binary number
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int counter = 0;
	unsigned long int point;

	for (i = 63; i >= 0; i--)
	{
		point = n >> i;

		if (point & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}

	if (!counter)
		_putchar('0');
}
