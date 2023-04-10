#include "main.h"

/**
 *_memset - put a byte into memory
 *@s: the memory area
 *@b: the constant byte
 *@n: the first n bytes
 *Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;
	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
