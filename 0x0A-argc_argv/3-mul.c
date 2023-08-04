#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: counter
 * @argv: pointer to pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc <= 3)
	{
		printf("Error\n");
		return (0);
	}	

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
