#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *s;

	if (s1 == 0 || s2 == 0)
		s1 = s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;
	b++;
	s = malloc(a * sizeof(*s1) + b * sizeof(*s2));
	if (s == 0)
		return (NULL);

	for (c = 0, d = 0; c < a + b; c++)
	{
		if (c < a)
			s[c] = s1[c];
		else
			s[c] = s2[d++];
	}
	return (s);
}
