#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 *str_concat - function to concatenate strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
char *concatStr;
unsigned int long size;
unsigned int long i, a, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size = (_strlen(s1) + _strlen(s2) + 1);

concatStr = malloc(sizeof(char) * size);
if (concatStr == NULL)
{
return (NULL);
}
else
{
for (i = 0; s1[i] != 0; i++)
{
concatStr[i] = s1[i];
}
for (j = i; j < size; j++)
{
for (a = 0; a < j; a++)
{
concatStr[j] = s2[a];
}
}
return (concatStr);
}
}

/**
 *_strlen - find length of string
 *@s: the string
 *Return: the length
 */

int _strlen(char *s)
{
int i = 0;

if (s == NULL)
return (0);
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

