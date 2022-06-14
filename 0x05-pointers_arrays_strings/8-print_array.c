#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: pointer to an array of int type
 * @n: argument passed into the function
 * Return: Returns nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n')
}
