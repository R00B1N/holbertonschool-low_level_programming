#include "holberton.h"
/**
* create_file - creates a file
* @filename: the filename to create
* @text_content: a NULL terminated string to write to the file
* Return: 1 (Success),  -1 (failure)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	while (text_content[i])
		i++;
	len = write(fd, text_content, i);
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
