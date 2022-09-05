#include <string.h>
#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: sstring in which the needle is searched
 * @needle: substring being looked for
 * Return: Returns a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
