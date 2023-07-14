#include <stdio.h>

/**
 * main - prints all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	for (int i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
