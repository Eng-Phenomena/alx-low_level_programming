#include <stdio.h>

/**
 * main - prints all possible different combinations
 * Return: 0
 */
int main(void)
{

	for (int n = 48; n <= 56; n++)
	{
		for (int m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
