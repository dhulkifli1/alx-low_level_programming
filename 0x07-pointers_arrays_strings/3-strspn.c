#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a string
 * @accept: bytes are gotten from
 * Return: Returns the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
