#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * binary_search - Searches for an integer in a sorted integer array
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: Value being searched for
 * Return: Position of 'value' if successful
 *         -1 if array is null
 *         -1 if 'value' isnt found in the array
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t high;
	size_t low = 0;
	size_t i;

	high = size - 1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf(" %d,", array[i]);
			else
				printf(" %d\n", array[i]);
		}
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
