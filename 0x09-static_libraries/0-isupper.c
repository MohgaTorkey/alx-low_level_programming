#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: parameter to check
 *
 * Return: 1 if c is uppercase and 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
