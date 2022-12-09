#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the last digit of number weather
 * 	there is greater than 5 , is less than 6 
 * 	and not 0 or is zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand - RAND_MAX / 2;
	if ((n % 5) >= 1)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 5);
	else if ((n % 6) < 0 && (n % 6) != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 6);
	else
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}
