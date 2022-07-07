#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: seperates the strings
 * @n: number of strings
 * @...: variable arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && va_arg(ap, char*) != NULL)
			printf("%s%s", va_arg(ap, char*), separator);
		if (separator == NULL)
		{}
		if (va_arg(ap, char*) == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}

