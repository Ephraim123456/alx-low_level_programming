#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		/* print argument to screen*/
		printf("%s\n", argv[i]);
	}
	return (0);
}
