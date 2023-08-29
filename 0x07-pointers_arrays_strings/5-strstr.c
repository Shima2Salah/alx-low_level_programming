/**
* _strstr - Locates a substring.
* @haystack: Input string.
* @needle: Substring to search.
* Return: Address of substring in haystack or 0 if not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;
	int i = 0;

	while (*b != '\0')
	{
		i++;
		b++;
	}
	b = needle;
	i--;
	while (*a != '\0')
	{
		if (*a == *b)
		{
			while (*b != '\0')
			{
				if (*b != *a)
				{
					a--;
					b = needle;
					break;
				}
				if ((*(b + 1) == '\0') && (*b == *a))
				{
					return (a - i);
				}
				b++;
				a++;
			}
		}
		a++;
	}
	return (0);
}

