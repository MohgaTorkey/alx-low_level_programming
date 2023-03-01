#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int i;

	while (dest[destlen])
	{
		destlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}

	dest[destlen] = '\0';
	return (dest);
}
