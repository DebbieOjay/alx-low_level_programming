#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int a, b;
	char *array;

	if (str == 0)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	array = malloc(sizeof(*array) * a);
	if (array == 0)
		return (NULL);
	for (b = 0; b < a; b++)
		array[b] = str[b];
	return (array);
}
