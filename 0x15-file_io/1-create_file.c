#include "main.h"

/**
 * create_file - function that create file
 *
 * @filename: pointer to filename
 * @text_content: text content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t write_file;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	write_file = write(file, text_content, strlen(text_content));

	if (filename == NULL || file == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (write_file == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (-1);
}

