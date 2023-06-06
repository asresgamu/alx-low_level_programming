#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@ab: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int ab)
{
	int a = 0;
	int i = ab;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		ab--;
	}
	return (dest);
}

