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
	int index = 0;
	int src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}

