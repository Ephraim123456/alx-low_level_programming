#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char is: %ld byte(s)\n", sizeof(char));

	printf("The size of an int is: %ld byte(s)\n", sizeof(int));

	printf("The size of a long int: %ld byte(s)\n", (long)sizeof(int));

	printf("The size of a long long: %ld byte(s)\n", (long)sizeof(long));


	return (0);
}
