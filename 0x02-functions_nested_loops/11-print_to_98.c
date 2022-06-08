#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: argument passed into the function
 * Return: Doesnt return anything
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < b)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		else
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
