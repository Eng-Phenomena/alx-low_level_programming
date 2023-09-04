#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - creating a file
 * @filename: name of file
 * @text_content: the text to be written
 * Return: 1 on succes -1 if error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	int len = 0, wri;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	wri = write(fd, text_content, len);
	if (fd == -1 || wri == -1)
		return (-1);
	close(fd);

	return (1);
}
