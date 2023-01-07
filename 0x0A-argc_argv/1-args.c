#include "main.h"
#include <stdio.h>

/**
 * main - the function of count a number of arguments
 *@argc: the number of argument
 *@argv: the array of arguments
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
