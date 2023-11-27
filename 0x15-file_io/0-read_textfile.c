#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the text file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count_read, count_write, fp;
	char *buf;

	if (!filename || letters == 0)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fp);
		return (0);
	}
	count_read = read(fp, buf, letters);
	close(fp);
	if (count_read <= 0)
	{
		free(buf);
		return (0);
	}
	count_write = write(STDOUT_FILENO, buf, count_read);
	free(buf);
	if (count_write < 0)
		return (0);
	return (count_write);
}
