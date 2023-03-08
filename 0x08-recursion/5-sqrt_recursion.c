#include "main.h"

int true_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: integer to be squared
 * Return: n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (true_sqrt_recursion(n, 0));
}

/**
 * true_sqrt_recursion -finds natural square root
 * @n: integer to be calculated
 * @i: iterator
 *
 * Return: square root
 */

int true_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (true_sqrt_recursion(n, i + 1));
}
