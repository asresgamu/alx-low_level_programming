#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @ab: the character to be checked
 * Return: 1 if ab is a letter, 0 otherwise
 */
int _isalpha(int ab)
	{
		return ((ab >= 'a' && ab <= 'z') || (ab >= 'A' && ab <= 'Z'));
	}

