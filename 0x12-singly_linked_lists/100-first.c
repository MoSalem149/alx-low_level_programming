#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Function executed before the main function.
 * Description: This function is automatically executed
 * before the `main` function starts executing. It prints
 * out a sentence.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

