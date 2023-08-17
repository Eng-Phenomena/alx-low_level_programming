#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all int parameters
 * @n: num of parameters
 * @...: variadic num of ints
 * Return: sum of all nums
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list args;
	
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
