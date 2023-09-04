#include <stdlib.h>
#include "main.h"

/**
 * create_file - creating a file
 * @filename: name of file
 * @text_content: the text to be written
 * Return: 1 on succes -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_CREATE | O_TRUNC, 0600);
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	if (fd == -1 || write(fd, text_content, len))
		return (-1);
	close(fd);

	return (1);
}
