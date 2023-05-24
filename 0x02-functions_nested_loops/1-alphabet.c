#include "main.h"
/*
 * File name: 1-alphabet.c
 *
 * used loop:  for loop
 *
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * using for loop
 */
void print_alphabet(void)
	/*There is no argument */
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
