#include "holberton.h"
/**
 * append_text_to_file - function that appends text ot a file
 * @filename: name of the file to read
 * @text_content: content of the text
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_APPEND);
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
