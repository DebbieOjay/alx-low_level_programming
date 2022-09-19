#include <stdio.h>

/**
 * _atoi - This converts a string to an integer
 * @s: string
 * Return: res
 */

int _atoi(char *s)
{
	int res = 0;

	for (int i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (res);
}
