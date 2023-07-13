#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 1
 */

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for(int i = 0; text[i] != "\0"; i++)
	{
		putchar(text[i]);
	}	

	return (0);
}
