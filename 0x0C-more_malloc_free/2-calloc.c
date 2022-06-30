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
	calloc(nmemb, size);
}
