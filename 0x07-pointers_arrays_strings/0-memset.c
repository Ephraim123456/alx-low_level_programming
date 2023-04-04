
/**
 * _memset - fills memory with a constat byte
 *@s: string pointer
 *@b: character variable
 *@n: integer variable
 * Return: Return memeset()
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (s == NULL)
	{
		return (NULL);
	}
	/*set counter i */
	int i = 0;
	/*iterate to fill *s with b n number of times*/
	while (i < n)
	{
		/*assign value of b to pointer address*/
		s[i] = b;
		i++;
	}
	return (s);
}
