#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	ssize_t read_by;
	ssize_t write_by;
	char *b = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (file == -1)
		return (0);

	if (b == NULL)
	{
		close(file);
		return (0);
	}

	read_by = read(file, b, letters);
	if (read_by == -1)
	{
		free(b);
		close(file);
		return (0);
	}

	write_by = write(STDOUT_FILENO, b, read_by);
	free(b);
	close(file);

	if (write_by == -1 || write_by != read_by)
		return (0);

	return (write_by);
}
