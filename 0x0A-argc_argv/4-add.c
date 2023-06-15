#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument counts
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{	int i, sum;

	if (argc > 1 && argc !isdigit)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 1)
	{
		printf("0\n");

	}
	else if (argc > 1)
	{

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argc[i]);
	}

		printf("%d\n", sum);
	}

	return (0);
}
