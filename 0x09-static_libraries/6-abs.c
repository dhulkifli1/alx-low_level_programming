#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: Argument passed into the function
 * Return: Value of integer
 */
int _abs(int n)
{
	int a = n * -1;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (a);
	}
	return (0);
}
