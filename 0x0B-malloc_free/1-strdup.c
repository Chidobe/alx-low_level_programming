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
unsigned int long i;

if (str == NULL)
{
return (NULL);
}
else
{
pstr = malloc(sizeof(str) + 5);

if (pstr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < sizeof(str) + 5; i++)
{
pstr[i] = str[i];
}
return (pstr);
}
}
}
