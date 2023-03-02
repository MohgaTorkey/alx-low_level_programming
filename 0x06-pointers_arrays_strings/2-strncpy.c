#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer destination to copy to
 * @src: string to be copied
 * @n: number of characters that is copied
 * Return: start
 */

char *_strncpy(char *dest, char *src, int n)
{
	if((dest == NULL) && (src == NULL))
		return NUll;

	char* start = dest;

	while (*src && n--)
	{
		*dest = src*;
		dest++;
		src++;
	}

	*dest = '\0';

	return start;
}
