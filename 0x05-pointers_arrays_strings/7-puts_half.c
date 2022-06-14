#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 * Return: Returns nothing
 */

void puts_half(char *str)
{
	int i;

	if (strlen(str) % 2 == 0)
	{
		for (i = strlen(str) / 2; i <= strlen(str); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if (strlen(str) % 2 == 1)
	{
		for (i = (strlen(str) - 1) / 2; i <= strlen(str); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
