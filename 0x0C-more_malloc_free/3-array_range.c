#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: Pointer to newly created array if successful
 *         NULL if min > max && if malloc fails
 */

int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i] = min++;
	return (array);
}
