
/**
 * _memset - fills memory with a constat byte
 *@s: pointer to a character
 *@b: character variable
 *@n: integer variable
 * Return: Return memeset()
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	/*iterate to fill *s with b n number of times*/
	for (i = 0; i < n; i++)
	{
		/*assign value of b to pointer address*/
		s[i] = b;
	}
	return (s);
}
