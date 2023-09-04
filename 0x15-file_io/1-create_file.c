#include "main.h"

/**
 * create_file - create file
 * @filename: A pointer to name create file
 * @text_content: A pointer to str write file
 * Description: task number 1
 * Return: 1 if success or -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int x, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(x, text_content, l);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
