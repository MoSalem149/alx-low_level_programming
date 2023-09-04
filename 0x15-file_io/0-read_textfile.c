#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read txt from a file and print to stdout.
 * @filename: txt file that is read
 * @letters: num of letter to read
 * Description: task number 0
 * Return: w- the number that is read and printed or 0 when func fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t y;
	ssize_t w;
	ssize_t r;

	y = open(filename, O_RDONLY);
	if (y == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	r = read(y, x, letters);
	w = write(STDOUT_FILENO, x, r);

	free(x);
	close(y);
	return (w);
}
