#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @c: argument of the int type
 * Return: value of last digit
 */

int print_last_digit(int c)
{
	int lastDigit = abs(c % 10);

	_putchar('0' + lastDigit);
	return (lastDigit);
}
