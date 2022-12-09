#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the alphabet in lowercase except 'e' and 'q'
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'e') && (ch != 'q'))
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
