#include "main.h"

/**
 * get_endianness - checks endianness
 * Description: task 6
 * Return: 0 for big or 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *x = (char *) &i;

	return (*x);
}
