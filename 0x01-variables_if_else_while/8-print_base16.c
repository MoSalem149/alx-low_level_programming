#include <stdio.h>
/**
 * main - Entry point
 * Description: "Print numbers of base 16 in new line"
 * Return: Always 0
 */
int main(void)
{
	int n;
	int l;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
