#include "main.h"

/**
 * _islower - Checks for lowercase character
 * Return: Always 0 Success
 * c - Argument passed to the function
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
