#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: int
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n, 0));
}

/**
 * sqrt - variable holder
 * @n: int
 * @i: int 
 * Return: squre root
 */
int sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}
