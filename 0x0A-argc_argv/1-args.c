#include <stdio.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: pointer to pointer
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
