#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print nums followed by a new line
 * @seperator: char seperator
 * @n: nums of nums in the parameters
 * @...: variable nums of numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char *) != NULL)
			printf("%s", va_arg(args, char *));
		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s",separator);
	}
	printf("\n");
	va_end(args);
}
