#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password for 101-crackne
 * Description: generates random password for 101-crackne.
 * Return: zero
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
