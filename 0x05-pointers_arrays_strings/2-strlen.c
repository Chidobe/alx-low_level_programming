#include "main.h"

/**
 *_strlen - outputs the length of a string
 *@s: the string
 *Return: the string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
