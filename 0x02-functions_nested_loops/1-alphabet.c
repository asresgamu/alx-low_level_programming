#include "main.h"
/*
 * print_alphabet: prints the alphabet in lowercase, which follow newline.
 * Return: Always (0) (Success)
 */
void print_alphabet(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
