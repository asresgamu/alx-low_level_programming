#include "main.h"
/**
 * _strpbrk - Entry point
 * @ab: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *ab, char *accept)
{
		int k;

		while (*ab)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*ab == accept[k])
			return (ab);
			}
		ab++;
		}

	return ('\0');
}

