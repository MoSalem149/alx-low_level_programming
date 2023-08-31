#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the num
 * @index: index of the bit
 * Description: task number 3
 * Return: 1 for success or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
