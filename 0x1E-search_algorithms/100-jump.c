#include <stdio.h>
#include <math.h>
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

/**
 * jump_search - Searches for a value in a sorted array 
 *               of integers using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where 'value' is located
 *         -1 if 'value' isnt present in 'array'
 *         -1 if 'array' is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size);
	size_t i, counter, low, high, linear, answer;
	int linear_array[] = {0};

	if (array == NULL)
		return (-1);
	for (i = 0; i <size; i = i + m)
	{
		if (array[i] > value)
		{
			low = i - m;
			high = i;
			for (counter = low; counter <= high; counter++)
			{
				for (linear = 0; linear < m; linear++)
				{
					linear_array[linear] = array[counter];
				}
			}
			answer = linear_search(linear_array, m, value);
			return (answer);
		}
		continue;
	}
	return (-1);
}
