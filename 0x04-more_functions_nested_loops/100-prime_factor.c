#include "main.h"

/**
 * main - prime factor
 * Return: 0
 */

int main(void)
{
	long long num = 612852475143;
	long long int fact, i;

	while (num % 2 == 0)
	{
		fact = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			fact = i;
			num = num / i;
		}
	}

	if (num > 2)
		fact = num;

	printf("%ld\n", max);
	return (0);
}
