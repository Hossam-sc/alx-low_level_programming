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

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (0);
	}
	else
	{
		for (i = 1, i < argc, i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
