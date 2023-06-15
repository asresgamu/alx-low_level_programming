#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determaing if the given number is 0 or + or -
 *
 * Return: Alwayses (0) if succusses
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
