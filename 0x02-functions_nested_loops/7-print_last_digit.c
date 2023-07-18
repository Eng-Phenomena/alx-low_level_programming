#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the int 
 * Return: value 
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	return (n % 10);
}
