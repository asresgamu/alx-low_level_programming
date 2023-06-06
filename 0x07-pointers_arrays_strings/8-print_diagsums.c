#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, ab;

	sum1 = 0;
	sum2 = 0;

	for (ab = 0; ab < size; ab++)
	{
		sum1 = sum1 + a[ab * size + ab];
	}

	for (ab = size - 1; ab >= 0; ab--)
	{
		sum2 += a[ab * size + (size - ab - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

