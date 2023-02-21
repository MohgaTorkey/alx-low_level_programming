#include "main.h"

/**
 * _isalpha - function that checks for alphabets.
 *
 * @c: parameter to be checked.
 *
 * return: 1 if alphabet else 0 .
 *
 */

int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122) || (c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
