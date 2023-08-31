#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: first num
 * @m: second num
 * Description: task number 5
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int counter = 0;
	unsigned long int point;
	unsigned long int current = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		point = current >> i;
		if (point & 1)
			counter++;
	}
	return (counter);
}
