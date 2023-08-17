#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print names followed by a new line
 * @seperator: char seperator
 * @n: nums of nums in the parameters
 * @...: variable nums of numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *name;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		name = va_arg(args, char *);

		if (name != NULL)
			printf("%s", name);
		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s",separator);
	}
	printf("\n");
	va_end(args);
}
