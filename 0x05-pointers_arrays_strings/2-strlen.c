/**
 * _strlen - function returns the length of string
 * @s: string pointer
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i, length;

	i = 0;

	length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
