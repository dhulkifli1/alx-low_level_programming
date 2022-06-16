#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: pointer to string src
 * @dest: pointer to string dest
 * Return: Pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dl = 0;

	while (dest[i++])
		dl++;
	for (i = 0; src[i]; i++)
		dest[dl++] = src[i];
	return(dest);
}
