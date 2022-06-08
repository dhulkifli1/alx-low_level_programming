#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: argument passed into the function
 * Return: Doesnt return anything
 */

void print_to_98(int n)
{
	int op = 1;

	if (n > 98)
		op = -1;
	while (n != 98)
	{
		printf("%d, ", n);
		n += op;
	}
	printf("98\n");
}
