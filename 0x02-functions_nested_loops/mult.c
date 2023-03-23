#include <stdio.h>
/**
 * main - entry point
 * prints 9 times_table starting from 0
 * Return: Always 0
 */
int main(void)
{
	/** int prod, num, count;
	
	for(count = 0; count <= 9; count ++)
	{

		prod = count * num;
		printf("%d\n", prod);
		num = count;
	}**/

	int i, j, prod, num;
	num = 0;
	for(i = 0; i <= 9; i++)
	{
		j = 0;
		while ( j <= 9)
		{	
			prod = j * num;

			printf("%d, ", prod);		
			j++;
		}

		printf("\n");
		num++;
	}

	return (0);
}

