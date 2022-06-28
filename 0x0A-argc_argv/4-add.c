#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if error, O if success
 */

int main (int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' && *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else if (atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
				return (0);
			}
		}
	}
}
