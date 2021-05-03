#include "holberton.h"
/**
 * cpfile - appends text to a file
 * @src: source file
 * @dest: destination file
 * Return: 1 on success or exit codes 97-100 if it fails
 */
int cpfile(char *src, char *dest)
{
	int fd1, fd2, nread;
	char buffer[BUFSIZ];

	fd1 = open(src, O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd2 = open(dest, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((nread = read(fd1, buffer, BUFSIZ)) > 0)
	{
		if (fd2 < 0 || write(fd2, buffer, nread) != nread)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", dest);
			close(fd1);
			exit(99);
		}
	}
	if (nread < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1 < 0 || fd2 < 0)
	{
		if (fd1 < 0)
			dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd1);
		if (fd2 < 0)
			dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
/**
 * main - program that copies the content of a file to another file
 * @ac: argument counter
 * @av: arguments passed to the command line
 * Return: 0 on success or exit 97 if it fails
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cpfile(av[1], av[2]);
	return (0);
}
