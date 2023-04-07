#include "main.h"

/**
 * binary_to_unit - converts a binary to unsigned int
 * @b: binary number
 * Return: converted number
 */

unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int decVal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decVal = 2 * decVal + (b[i] - '0');
	}

	return (decVal);
}
