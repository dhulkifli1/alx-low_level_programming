#include "main.h"
/**
 * print_alphabet - prints alphabet in order
 * Return: 0 for success
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

