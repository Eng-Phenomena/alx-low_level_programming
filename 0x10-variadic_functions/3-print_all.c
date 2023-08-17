#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything
 * @format: format to print
 * @...: variable parameters
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char char_f, types;
	int int_f;
	float float_f;
	char *str;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	if (format == NULL)
		return;

	while (format[i])
	{
		types = format[i];

		switch (types)
		{
			case 'c':
				char_f = va_arg(args, int);
				printf("%s%c", separator, char_f);
				break;
			case 'i':
				int_f = va_arg(args, int);
				printf("%s%d", separator, int_f);
				break;
			case 'f':
				float_f = va_arg(args, double);
				printf("%s%f", separator, float_f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;

		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
