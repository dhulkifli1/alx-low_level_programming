#insert "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(src + a) = *(dest + a);
	}
	return (dest)
}
