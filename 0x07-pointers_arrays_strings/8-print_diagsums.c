#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: array
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, p;
	int bdiagsum = 0;
	int fdiagsum = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		bdiagsum += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		fdiagsum += *(a + p);
	}
	printf("%i, %i\n", bdiagsum, fdiagsum);
}
