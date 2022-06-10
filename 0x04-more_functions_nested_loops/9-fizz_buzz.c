#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 Success
 */

int main(void)
{
	int a = 1;

	while (a <= 100; a++)
	{
		if (a % 51 == 48)
			printf("Fizz ");
		else if (a % 53 == 48)
			printf("Buzz ");
		else if (a % 51 == 48 && a % 53 == 48)
			printf("FizzBuzz ");
		else
			printf("%d ", a);
	}
	return (0);
}
