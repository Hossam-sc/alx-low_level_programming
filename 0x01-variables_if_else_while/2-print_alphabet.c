#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'a';
	
	for ( ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
