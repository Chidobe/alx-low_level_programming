#include "main.h"

/**
 *_strchr - locates character and returns pointer to it
 *@s: the string
 *@c: the character
 *Return: the pointer
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&(s[a]));
		}
	}
	return (0);
}
