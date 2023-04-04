
/**
 * _memset - fills memory with a constat byte
 *@s: string pointer
 *@b: character variable
 *@n: integer variable
 * Return: Return memeset()
 */
char *_memset(char *s, char b, unsigned int n)
{}
	/*set counter i */

	/*iterate to fill *s with b n number of times*/
	for (int i = 0; i < n; i++)
{
		/*assign value of b to pointer address*/
		s[i] = b;
	}
	return (s);
}
