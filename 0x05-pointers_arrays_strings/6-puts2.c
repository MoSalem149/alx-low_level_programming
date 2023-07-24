#include "main.h"
/**
 * puts2 - funcation should print only one character out of two.
 * Description: funcation should print only one character out of two.
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longs = 0;
	int x = 0;
	char *y = str;
	int m;

	while (*y != '\0')
	{
		y++;
		longs++;
	}
	x = longs - 1;
	for (m = 0; m <= x; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}

	_putchar('\n');
}
