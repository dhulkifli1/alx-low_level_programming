#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 Success
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", a);
		}
		if (i != 100)
		{
			putchar(' ');
		}

		a++;
	}
	putchar('\n');
	return (0);
}
