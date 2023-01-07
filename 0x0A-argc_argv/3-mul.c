#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 *@argc: the number of argument
 *@argv: the array of arguments
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1 && argc < 3)
	{
		for (i = 1, i < argc, i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
