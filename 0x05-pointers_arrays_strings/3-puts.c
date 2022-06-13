#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer that points to a char type
 * Return: Returns nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
