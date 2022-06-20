#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: elements of the chessboard
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c = 0;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c", *(a[b] + c));
			if (c == 7)
				printf("\n");
		}
	}
}
