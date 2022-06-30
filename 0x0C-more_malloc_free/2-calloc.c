#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: first argument
 * @size: second argument
 * Return: Returns nothing
 *         Returns NULL if malloc fails or if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mry;
	char fill;
	unsigned int i;

	if ( nmemb == 0 || size == 0)
		return (NULL);

	mry = malloc(nmemb * size);

	if (mry == 0)
		return (NULL);

	fill = mry;

	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (mry);
}
