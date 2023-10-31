#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t write_by = write(file, text_content, strlen(text_content));

	if (filename == NULL)
		return (-1);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (write_by == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
