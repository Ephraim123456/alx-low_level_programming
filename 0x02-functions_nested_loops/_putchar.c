#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * _putchar - write the character c to stdout
 * @c - the character to print out
 * Return - 1 (Success)
 *
 * On error, -1 is returned and error is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
