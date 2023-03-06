#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystach;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
