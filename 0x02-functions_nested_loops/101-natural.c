#include <stdio.h>
/**
 * main - Prints the even Fiab numbers
 * less than 4000000.
 * Return: None
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 40000000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
		++i
	}
	printf("%ld\n", sum);
	return (0);
}
