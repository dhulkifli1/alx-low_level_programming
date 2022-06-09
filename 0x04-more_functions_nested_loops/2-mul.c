#include <stdlib.h>
#include "main.h"

/**
 * mul - multiplies two integers
 * @a: argument 1
 * @b: argument 2
 * @result: result of the multiplication
 * Return: Returns result
 */

int mul(int a, int b)
{
	int result = a * b;

	if (a < 0 || b < 0)
		return (result * -1);
	else
		return (result);
	return (0);
}
