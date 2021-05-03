#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{	close(fd);
		return (0);
	}
	len = read(fd, buffer, letters);
	close(fd);
	if (len == -1)
	{
		free(buffer);
		return (0);
	}
	len = write(STDOUT_FILENO, buffer, len);
	free(buffer);
	return (len);
}
