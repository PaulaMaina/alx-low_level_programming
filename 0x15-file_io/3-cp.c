#include "main.h"

#define MAX_SIZE 1024
#define SERR STDERR_FILENO

/**
 * main - copies one file to another
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 else 97, 98, 99, 100
 */

int main(int argc, char *argv[])
{
	int fd_src, fd_target, in_status, out_status;
	char buffer[MAX_SIZE];

	if (argc != 3)
		dprintf(SERR, "Usage: cp file_from file_to\n"), exit(97);
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		dprintf(SERR, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_target = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

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
				dprintf(SERR, "Error: Can't  write to %s\n", argv[2]), exit(99);
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
