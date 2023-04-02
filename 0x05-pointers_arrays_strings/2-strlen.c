#include "main.h"

/**
 *_strlen - outputs the length of a string
 *@s: the string
 *Return: the string length
 */

int _strlen(char *s)
{
	int i;

	while (i >= 0)
	{
		if  (s[i] == 0)
		{
			break;
		}
		i++;
	}
	return (i);
}
