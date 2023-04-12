/**
 * create_array - Function to create character array and initialize it
 * @size: unsigned integer
 * @c: character variable
 * return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char arr[size];
		int i;

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
			return (arr);
		}
	}
}
