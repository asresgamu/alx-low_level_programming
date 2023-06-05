#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @ab: the prameter
 * Return: value of the last digit
 */
int print_last_digit(int ab)
{
	int a;

	if (ab < 0)
		ab = -ab;

	a = ab % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);

}

