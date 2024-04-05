#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: file to manipulate
 * @text_content: text to append
 *
 * Return: 1 if successful, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdW, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_RDWR | O_APPEND);
	fdW = write(fd, text_content, len);

	if (fd == -1 || fdW == -1)
		return (-1);

	close(fd);
	return (1);
}

