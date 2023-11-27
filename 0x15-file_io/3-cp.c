#include "main.h"

<<<<<<< HEAD
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
=======
#define MAX_SIZE 1024
#define SERR STDERR_FILENO
>>>>>>> 8811387810a2f6d054797f683607a73a02bfa012

/**
 * main - copies one file to another
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 else 97, 98, 99, 100
 */

int main(int argc, char *argv[])
{
<<<<<<< HEAD
	ssize_t fd_src, fd_target;
=======
	int fd_src, fd_target, in_status, out_status;
	char buffer[MAX_SIZE];
>>>>>>> 8811387810a2f6d054797f683607a73a02bfa012

	if (argc != 3)
		dprintf(SERR, "Usage: cp file_from file_to\n"), exit(97);
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
<<<<<<< HEAD
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd_target = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
=======
		dprintf(SERR, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_target = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

>>>>>>> 8811387810a2f6d054797f683607a73a02bfa012
	if (fd_target == -1)
		dprintf(SERR, "Error: Can't  write to %s\n", argv[2]), exit(99);
	do {
		in_status = read(fd_src, buffer, MAX_SIZE);
		if (in_status == -1)
		{
			dprintf(SERR, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (in_status > 0)
		{
			out_status = write(fd_target, buffer, (ssize_t) in_status);
			if (out_status == -1)
			{
				close(fd_src), close(fd_target);
				dprintf(SERR, "Error: Can't  write to %s\n", argv[2]), exit(99);
			}
		}
	} while (in_status > 0);
	in_status = close(fd_src);
	if (in_status == -1)
		dprintf(SERR, "Error: Can't  close fd %d\n", fd_src), exit(100);
	out_status = close(fd_target);
	if (out_status == -1)
		dprintf(SERR, "Error: Can't  close fd %d\n", fd_target), exit(100);
	return (0);
}
