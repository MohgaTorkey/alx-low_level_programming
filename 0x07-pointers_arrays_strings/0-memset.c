#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned char *p = s;
	i = 0;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
