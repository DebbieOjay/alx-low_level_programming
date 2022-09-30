#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that multiplies two numbers
 * @argc: argument count for main
 * @argv: vector to the arguments
 *
 * Return: void
 */


int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
