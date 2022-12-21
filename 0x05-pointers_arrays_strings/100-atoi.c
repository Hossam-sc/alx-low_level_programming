#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * _atoi - function that convert a string to an integer
 *@s: pointer of string
 * Return: 0 or numbers
 */
int _atoi(char *s)
{
	int i = 0, j = 1;
	unsigned int sum = 0;

	while (s[i] != '\0')
	{
		if ((s[i] < '0' || s[i] > '9') && (s[i] == '-'))
			j = j * -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			sum = sum * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (sum * j);
}
