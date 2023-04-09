#include "main.h"

/**
 *_puts_recursion - prints a string followed by new line
 *@s: the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
