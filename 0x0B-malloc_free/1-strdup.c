#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

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
pstr = malloc(_strlen(str) + 1);

if (pstr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < _strlen(str) + 1; i++)
{
pstr[i] = str[i];
}
return (pstr);
}
}
}


/**
 *_strlen - find length of string
 *@s: the string
 *Return: the length
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
