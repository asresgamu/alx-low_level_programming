#include "main.h"
/*
 * File name: 1-alphabet.c
 *
 * used loop:  for loop
 *
 * Return: Always (0) after  prints the alphabet in lowercase, followed by a new line using for loop
 */
void print_alphabet(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
