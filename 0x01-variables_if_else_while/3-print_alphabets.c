#include <stdio.h>
/**
 * main - Entry point
 * Description: "Print alphabets lowercase and uppercase"
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int x = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
