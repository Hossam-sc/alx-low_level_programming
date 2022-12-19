#include "main.h"

/**
 * swap_int - function that sawps the values of two integers
 *@a:the first integer
 *@b: the second integer
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
