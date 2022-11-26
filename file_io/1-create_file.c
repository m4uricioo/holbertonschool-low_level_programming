#include "main.h"
#include <string.h>

/**
* create_file - creates a file
* @text_content: NULL terminated string to write to the file
* @filename: name of the file to create
*
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…)
*if filename is NULL return -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	w = write(fd, text_content, strlen(text_content));
		return (1);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
