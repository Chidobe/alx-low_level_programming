#include "main.h"

/**
 *_sqrt_recursion - returns square root
 *@n: the number
 *@a: the count
 *Return: the value of square root
 */

int init_sqrt_recursion(int n, int a);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (init_sqrt_recursion(n, 0));
	}
}

/**
 *init_sqrt_recursion - returns square root
 *@n: the number
 *@a: the count
 *Return: the value of square root
 */

int init_sqrt_recursion(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (init_sqrt_recursion(n, a + 1));
	}
}
