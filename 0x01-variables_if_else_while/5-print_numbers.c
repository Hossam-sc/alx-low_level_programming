#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the digit numbers starting with zero
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
