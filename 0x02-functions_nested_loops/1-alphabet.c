#include "main.h"
/*
 * File name: 1-alphabet.c
 *
 * used loop:  for loop
 *
 * Return: Always (0) prints the alphabet in lowercase.
 */
void print_alphabet(void) //This print_alphabet not take argument

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
