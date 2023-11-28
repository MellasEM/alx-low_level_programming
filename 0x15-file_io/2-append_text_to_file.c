#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: text content
 * Return: 1 (on success) and -1 (on failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");

	if (filename == NULL || text_content == NULL || file == NULL)
	{
		return (-1);
	}

	fprintf(file, "%s", text_content);

	fclose(file);

	return (1);
}
