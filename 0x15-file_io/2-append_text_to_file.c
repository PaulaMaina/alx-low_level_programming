#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t to_append = 0, fp;
	size_t count;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);
	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;
		to_append = write(fp, text_content, count);
	}
	close(fp);
	if (to_append == -1)
		return (-1);

	return (1);
}
