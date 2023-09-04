#include "main.h"

/**
 * append_text_to_file - append txt in the end of the file
 * @filename: pointer to name of a file
 * @text_content: str to be add to the end of file
 * Description: task number 2
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, l);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
