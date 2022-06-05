#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		for (b = '0'; b <= '9'; b++)
		{
			if (a != b && a < b)
				putchar(b);
			if (a < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
