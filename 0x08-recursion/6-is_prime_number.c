#include "main.h"

int cal_prime(int n, int i);

/**
 * _prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: input
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (cal_prime(n, 1));
}
/**
 * cal_prime - calculate prime number
 * @n: number to be calculated
 * @i: iteration
 * Return: 1 for prime otherwise 0
 */
int cal_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (cal_prime(n, i + 1));
}
