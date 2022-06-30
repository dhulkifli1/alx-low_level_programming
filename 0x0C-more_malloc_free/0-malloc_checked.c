#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: arguments passed into the function
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mry = malloc(b);

	if (mry == NULL)
		exit(98);

	return (mry);
}
