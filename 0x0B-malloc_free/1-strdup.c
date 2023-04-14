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

	if (str == NULL)
	{
		return (NULL);
	}
	else 
	{
	pstr = malloc(sizeof(char));
	*pstr = *str;
	return (pstr);
	}
}
