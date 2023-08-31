#include "main.h"

/**
 * binary_to_unit - convert a binary number to unsign int
 * @b: container for binary number
 * Description: task number 0
 * Return: the number after convert
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimal_value = decimal_value * 2 + (b[i] - '0');
	}

	return (decimal_value);
}
