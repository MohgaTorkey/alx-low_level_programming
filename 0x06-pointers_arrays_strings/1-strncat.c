#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to appened upon
 * @src: string to be appended
 * @n: number of bytes from src to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int index =0;

	while (dest[index++])
	{
		destlen++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[destlen++] = src[index];
	}
	return (dest);
}
