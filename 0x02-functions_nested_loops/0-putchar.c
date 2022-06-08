#include "main.h"
/**
 * main - this is the main file
 *
 * Return: return success always
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
