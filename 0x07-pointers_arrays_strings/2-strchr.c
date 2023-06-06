#include "main.h"
/**
 * _strchr - Entry point
 * @ab: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *ab, char c)
{
	int i = 0;

	for (; ab[i] >= '\0'; i++)
	{
		if (ab[i] == c)
			return (&ab[i]);
	}
	return (0);
}
