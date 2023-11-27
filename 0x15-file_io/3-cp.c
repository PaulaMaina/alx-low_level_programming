#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: string
 * Return: length of the string
 */

size_t _strlen(char *str)
{
	size_t str_len;

	for (str_len = 0; str[str_len]; str_len++)
		;
	return (str_len);
}

/**
 * _close - closes files
 * @fd: file to close
 */

void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * cp_file - copies a file
 * @fd_src: source file
 * @fd_target: target file
 * @target: string of the target filename
 *
 */

void cp_file(ssize_t fd_src, ssize_t fd_target, char *target)
{
	ssize_t len;
	char *buf[1024];

	len = read(fd_src, buf, 1024);
	while (len != 0)
	{
		if (len == -1)
		{
			_close(fd_src);
			_close(fd_target);
			exit(98);
		}
		len = write(fd_target, buf, len);
		if (len == -1)
		{
			_close(fd_src);
			_close(fd_target);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
			exit(99);
		}
		len = read(fd_src, buf, 1024);
	}
}

/**
 * main - copies one file to another
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 else 97, 98, 99, 100
 */

int main(int argc, char *argv[])
{
	ssize_t fd_src, fd_target;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd_target = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_target == -1)
	{
		_close(fd_src);
		dprintf(STDERR_FILENO, "Error: Can't  write to %s\n", argv[2]);
		exit(99);
	}
	cp_file(fd_src, fd_target, argv[2]);
	_close(fd_src);
	_close(fd_target);
	return (0);
}
