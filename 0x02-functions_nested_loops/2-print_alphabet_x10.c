#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 11; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
