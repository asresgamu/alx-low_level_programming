#include "main.h"
/**
 * _strspn - Entry point
 * @ab: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *ab, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*ab)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*ab == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		ab++;
	}
	return (n);
}

