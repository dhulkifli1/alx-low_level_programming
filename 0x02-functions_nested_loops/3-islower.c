#include "main.h"

/**
 * _islower - Checks if the arg c is lowercase
 * c - the character being checked
 *
 * Return: 1 if the c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (0);
}
