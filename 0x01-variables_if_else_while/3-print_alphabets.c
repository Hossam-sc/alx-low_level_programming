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
	char c = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
