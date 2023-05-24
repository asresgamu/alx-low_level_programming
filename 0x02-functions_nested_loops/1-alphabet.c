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
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
