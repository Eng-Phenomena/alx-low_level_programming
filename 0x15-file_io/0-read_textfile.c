#include "main.h"

/**
 * read_textfile - reading from a file then printing the out
 * @filename: filename
 * @letters: num of letters
 * Return: 0 if error and letters if succefull
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY);
	ssize_t let, wri;
	char *buf = malloc(sizeof(char) * letters);

	if (filename || fd == -1)
		return (0);
	let = read(fd, buf, letters);
	wri = write(STDOUT_FILENO, buf, let);

	return (wri);
}
