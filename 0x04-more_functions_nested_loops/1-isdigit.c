#include "main.h"

/**
* _isdigit - checks if character is between 0 - 9.
* @c: is the number argument
* Return: 1 if true and 0 if false.
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
