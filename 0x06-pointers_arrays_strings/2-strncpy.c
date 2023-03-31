#include <string.h>
/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: integer value specifying number of char to be copied
 * Return: return strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));

}
