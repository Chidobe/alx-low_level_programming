#include "main.h"

/**
 *factorial - returns factorial of a number
 *@n: the number
 *Return: value of factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
