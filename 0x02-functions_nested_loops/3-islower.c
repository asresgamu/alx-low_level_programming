#include "main.h"
/**
 * _islower - check if char is lowercase
 * @ab: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */


	int _islower(int ab)
	{
		if (ab >= 'a' && ab <= 'z')
			return (1);
		else
			return (0);
	}

