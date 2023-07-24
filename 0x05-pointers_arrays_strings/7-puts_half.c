#include "main.h"
/**
 * puts_half - a funcation that prints half of string in new line.
 * Description: a funcation that prints half of string in new line.
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int a;
	int n;
	int longs;

	longs = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		longs++;
	}
	n = (longs / 2);
	if ((longs % 2) == 1)
	{
		n = ((longs + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
