#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: integer value
 * Return: return strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
