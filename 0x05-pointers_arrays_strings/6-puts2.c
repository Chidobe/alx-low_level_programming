#include "main.h"

/**
 *puts2 - print every other character
 *@str: the string
 */

void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *p = str;
	int i;

	while (*p != '\0')
	{
		p++;
		len++;
	}
	t = len - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
