#include "main.h"

/**
 *_memcpy - copies from source to destination
 *@dest: the destination
 *@src: the source
 *@n: the number of bytes
 *Return: the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c;
	int a = n;

	for (c = 0; c < a; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
