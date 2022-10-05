#include "main.h"
#include <stdlib.h>

/**
 * **strtow - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */

char **strtow(char *str)
{
	char **d;
	int i;
	int j = 0;
	int con = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
			con++;
	}

	d = malloc(sizeof(char) * con);

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			*d[j] = str[i];
			j++;
		}
		else
		{
		}
	}
	return (d);
}
