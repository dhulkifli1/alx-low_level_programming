#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 without 2 and 4
 * @a: stores value
 * Return: nothing
 */

void print_most_numbers(void)
{
	char a;

	for (a >= '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}