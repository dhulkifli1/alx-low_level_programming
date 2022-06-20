#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: elements of the chessboard
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			printf("%c", *(a[a] + b));
			if (b == 7)
				printf("\n");
		}
	}
}
