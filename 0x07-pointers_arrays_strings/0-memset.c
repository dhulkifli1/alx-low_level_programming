#include "main.h"

/*
 * *_memset - fills the first n bytes of the memory area
 *            pointed to by s with the constant byte b
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: number of times the constant byte will
 *     fill
 * Return: Returns pointer to the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return(s);
}