#include "main.h"

/**
 * clear_bit - sets the val of a given bit to 0
 * @n: pointer to the num
 * @index: index of the bit 
 * Description: task number 4
 * Return: 1 for success or -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
