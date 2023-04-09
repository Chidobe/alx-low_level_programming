#include "main.h"

/**
 *is_prime_number - returns 1 if prime
 *@n: number
 *@c: counter
 *Return: 1 if prime
 */

int calc_prime(int n, int c);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (calc_prime(n, n - 1));
	}
}

/**
 * calc_prime - calculates the prime recursively
 * @n: number
 * @c: counter
 * Return: 1 if prime
 */

int calc_prime(int n, int c)
{
	if (c == 1)
	{
		return (1);
	}
	else if (n % c == 0 && c > 0)
	{
		return (0);
	}
	else
	{
		return (calc_prime(n, c - 1));
	}
}
