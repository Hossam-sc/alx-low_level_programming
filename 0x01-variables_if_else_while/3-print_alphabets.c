#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the alphabet in lowercase and uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
