#include "main.h"
/**
 * main - main entry
 * program that copies the content of a file to another file.
 * @argc: argument number
 * @argv: arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	const char *ffile;
	const char *tfile;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ffile = argv[1];
	tfile = argv[2];
	fcopy(ffile, tfile);
	exit(0);
}
void fcopy(const char *ffile, const char *tfile)
{
	char buf[1024];
	ssize_t read_by;
	ssize_t write_by;
	int to;
	int from;

	from = open(ffile, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ffile);
		exit(96);
	}

	to = open(tfile, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", tfile);
		close(from);
		exit(99);
	}

	while ((read_by = read(from, buf, 1024)) > 0)
	{
	write_by = write(to, buf, read_by);
	if (write_by != read_by)
	{
		dprintf(STDERR_FILENO, "Error: Incomplete write to file %s\n", tfile);
		close(from);
		close(to);
		exit(99);
	}
	if (read_by == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ffile);
	close(from);
	close(to);
	exit(98);
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}

	}
}
