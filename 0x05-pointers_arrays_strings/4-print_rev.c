#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer of char type
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int i = _strlen(s);
	int j = i - 1;

	while (i >= 0)
	{
		_putchar(s[j]);
		i--;
	}
	_putchar('\n');
}
