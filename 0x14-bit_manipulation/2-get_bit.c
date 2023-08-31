#include "main.h"

/**
 * get_bit - returns the val of a bit at an given index
 * @n: number
 * @index: index
 * Description: task number 2
 * Return: val of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index > 63)
		return (-1);

	value_of_bit = (n >> index) & 1;

	return (value_of_bit);
}
