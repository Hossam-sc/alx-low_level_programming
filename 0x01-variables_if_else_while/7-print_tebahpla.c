#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the alphabet in reverse lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
