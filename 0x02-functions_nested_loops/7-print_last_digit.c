#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * int: argument of the int type
 * Return: Always 0 success
 */

int print_last_digit(int n)
{
	int a = n % '10';
	_putchar(a);
	return (a);
}
