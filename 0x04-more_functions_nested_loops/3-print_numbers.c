#include "main.h"

/**
 * print_numbers - prints numbers
 * @a: character used in loop
 * Return: Returns nothing
 */

void print_numbers(void)
{
	int a;
	
	for (a >= '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
