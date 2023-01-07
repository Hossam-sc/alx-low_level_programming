#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function for test the digit from 0 to 9
 * @c :the digit for tseting
 * Return: for the digits (1), else (0)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
