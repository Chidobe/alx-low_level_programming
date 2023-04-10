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

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
