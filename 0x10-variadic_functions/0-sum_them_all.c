#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters to be added
 * Return: Returns the sum
 *         Or 0 if there are no arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	else
	{
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
