#include "main.h"

/**
 *_puts_recursion - prints a string followed by new line
 *@s: the string
 */

void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		*s++;
		_puts_recursion(char *s);
	}
	else
	{
		return;
	}
	_putchar('\n');
}
