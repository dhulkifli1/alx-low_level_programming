#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @seperator: string between two numbers
 * @n: number of integers passed to the function
 * @...: variable arguments
 * @Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	/*unsigned int x = va_arg(ap, int);*/

	va_start(ap, n);
	unsigned int x = va_arg(ap, int);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
			printf("%d%s\n", x, separator);
		else
			printf("%d\n", x);
	}
	va_end(ap);
}
