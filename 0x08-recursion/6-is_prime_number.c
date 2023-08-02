#include "main.h"

/**
 * is_prime_number - prime
 * @n: int
 * Return: true for prime and false otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - calculates if a number is prime recursively
 * @n: int
 * @i: int
 * Return: return boolean expression
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
