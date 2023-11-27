#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content:null terminated string to write to file
 *
 * Description: The created file must have those permissions
 *
 * Return: a on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t to_write = 0, fp;
	size_t count;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;
		to_write = write(fp, text_content, count);
	}
	close(fp);
	if (to_write == -1)
		return (-1);
	return (1);
}
