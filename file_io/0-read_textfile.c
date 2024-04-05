#include "main.h"
/**
 * read_textfile - reads text file and prints it to POSIX stdoout
 * @filename: pointer to file
 * @letters: number of it should print
 * Return: actual number of letters it reads and prints, 0 if error or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fdR, fdW;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	fdR = read(fd, buffer, letters);
	fdW = write(STDOUT_FILENO, buffer, fdR);

	if (fd == -1 || fdR == -1 || fdW == -1 || fdW != fdR)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (fdW);
}


