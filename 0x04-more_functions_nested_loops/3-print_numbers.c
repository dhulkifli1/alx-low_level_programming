#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @a: character used in loop
 * Return: Returns nothing
 */

void print_numbers(void)
{
	int a;
	
	for (a = 48; a <= 57; ++a)
	{
	_putchar(a);
	}
	_putchar('\n');
}
