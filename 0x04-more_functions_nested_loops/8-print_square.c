#include "main.h"

/**
 * print_square - print a square
 * @size: accepts interger value
 */

void print_square(int size)
{

	int i, k;

	i = 0;


	while (i < size)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
