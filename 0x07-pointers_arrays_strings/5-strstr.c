/**
* _strstr - Locates a substring.
* @haystack: Input string.
* @needle: Substring to search.
* Return: Address of substring in haystack or 0 if not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *res = haystack, *f = needle;

	while (*haystack)
	{
		while (*needle)
			if (*haystack++ != *needle++)
				break;
		if (!*needle)
			return (res);
		needle = f;
		res++;
		haystack = res;
	}
	return (0);
}
