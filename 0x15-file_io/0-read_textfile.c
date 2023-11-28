#include "main.h"

/**
 * ssize_t - function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: file name
 * @size_t: letters
 * Return:  actual number of letters or 0 if the file can not be opened, read
 * or filename is NULLor if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t readby;
	ssize_t write_by;
	char *l = malloc(sizeof(char) * letters);

	file = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (file == -1)
		return (0);

	if (l == NULL)
	{
		close(file);
		return (0);
	}

	readby = read(file, l, letters);
	if (readby == -1)
	{
		free(l);
		close(file);
		return (0);
	}

	write_by = write(STDOUT_FILENO, l, readby);
	free(l);
	close(file);

	if (write_by == -1)
	{
		if (write_by != readby)
		{
			return (0);
		}
	}

	return (write_by);
}
