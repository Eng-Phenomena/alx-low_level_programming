#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print nums followed by a new line
 * @seperator: char seperator
 * @n: nums of nums in the parameters
 * @...: variable nums of numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s\n", va_arg(args, int), seperator);
	}
	va_end(args);
}
