#include <stdlib.h>
/**
* count_words - Count the number of words on a given string.
* @str: string to count words.
* Return: Amount of words.
*/
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] != ' ')
			count++;
		if (str[i] == ' ' && (str[i + 1] != ' ' && str[i + 1] != '\0'))
			count++;
	}
	count++;
	return (count);
}
/**
* alloc_array - Creates array with words size.
* @str: String to evaluate.
* @count: integer input.
* Return: filled array.
*/
char **alloc_array(char *str, int count)
{
	char **ptr;
	int j = 0, i, k = 0, m;

	ptr = malloc(sizeof(ptr) * count);
	if (ptr == NULL)
		return (NULL);
	if (str[0] == ' ')
		j++;
	for (i = 0; i < count - 1; i++)
	{
		while (str[j] != '\0')
		{
			if (str[j] == ' ' && str[j - 1] != ' ')
				break;
			if (str[j] == ' ')
				j++;
			if (str[j] != ' ')
			{
				j++;
				k++;
			}
		}
		k++;
		ptr[i] = malloc(sizeof(char) * k);
		if (ptr[i] == NULL)
		{
			for (m = 0; m < k; m++)
				free(ptr[m]);
			free(ptr);
			return (NULL);
		}
		k = 0;
		j++;
	}
	ptr[i] = NULL;
	return (ptr);
}
/**
* strtow - Splits a string into words.
* @str: String to split.
* Return: Vector of words, or NULL if failed..
*/
char **strtow(char *str)
{
	int i, j = 0, count = 0, l = 0;
	char **ptr;

	if (str == NULL)
		return (NULL);
	count = count_words(str);
	ptr = alloc_array(str, count);
	i = 0;
	j = 0;
	if (str[0] == ' ')
		l++;
	for (; str[l] != '\0'; l++)
		if (str[l] != ' ')
			ptr[i][j++] = str[l];
		else if (str[l] == ' ' && str[l - 1] != ' ')
		{
			ptr[i++][j] = '\0';
			j = 0;
		}
	return (ptr);
}

