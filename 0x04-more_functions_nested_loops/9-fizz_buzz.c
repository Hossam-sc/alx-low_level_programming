#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the numbers from 1 to 100
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	char A[] = "Fizz";
	char B[] = "Buzz";
	char C[] = "FizzBuzz";

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s ", A);
		}
		else if (i == 100)
		{
			printf("%s", B);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", B);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", C);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
