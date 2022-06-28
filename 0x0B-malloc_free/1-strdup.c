#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *            which contains a copy of the string given as a parameter.
 * @str: pointer to string
 * Return: NULL if str = NULL and if insufficient memory was available
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		/*printf("failed to allocate memory\n");*/
		return (NULL);
	}
	else
	{
	return (strdup(str));
	}
}
