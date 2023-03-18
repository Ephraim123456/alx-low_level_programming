#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of an in is: %ld byte(s)\n", sizeof(int));

	printf("The size of a double is: %ld byte(s)\n", sizeof(double));

	printf("The size of a float is: %ld byte(s)\n", sizeof(float));

	printf("The size of a char: %ld byte(s)\n", sizeof(char));

	printf("The size of a short: %ld byte(s)\n", sizeof(short));

	printf("The size of a long: %ld byte(s)\n", sizeof(long));

	printf("The size of unsigned: %ld byte(s)\n", sizeof(unsigned int));

	return (0);
}
