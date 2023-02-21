#include "main.h"

/**
 * print_sign - function that prints the sign number
 *
 * Return: 1, 0 and -1
 *
 * @n: function parameter
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
