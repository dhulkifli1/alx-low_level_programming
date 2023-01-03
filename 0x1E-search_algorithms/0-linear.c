#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *                 using the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where 'value' is located
 *         -1 if 'value' isnt present in 'array'
 *         -1 if 'array' is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
