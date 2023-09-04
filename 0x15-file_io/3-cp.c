#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: counting vars
 * @argv: char pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int first, second, re, wri;
	char *buf = malloc(sizeof(char) * 1024);
	int f, s;

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	first = open(argv[1], O_RDONLY);
	re = read(first, buf, 1024);
	second = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	do {
		if (first == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wri = write(second, buf, re);
		if (second == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		re = read(first, buf, 1024);
		second = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buf);
	f = close(first);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	s = close(second);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
