#include "main.h"

/**
 *rev_string - reverses a string
 *@s: the string
 */

void rev_string(char *s)
{
	int len;
	char revstr;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		revstr += s[i];
	}
}
