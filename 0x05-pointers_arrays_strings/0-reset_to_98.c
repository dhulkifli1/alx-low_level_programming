#include "main.h"

/**
 * reset_to_98 - updates value to 98
 * @*n - argument
 * Return: nothing
 */

void reset_to_98(int *n)
{
	int p;

	p = 98;
	n = &p;
	*n = 98;
}
