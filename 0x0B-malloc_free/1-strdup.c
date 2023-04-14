#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function that returns pointer to allocated memory contaiinig string
 *@str: the string
 *Return: pointer to the string
 */

char *_strdup(char *str)
{
	char *pstr;
	long unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else 
	{
	pstr = malloc(sizeof(char) + 12);
	for (i = 0; i < sizeof(char) + 12; i++)
	{
	pstr[i] = str[i];
	}
	return (pstr);
	}
}
