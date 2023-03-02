#include "main.h"

/**
 * _strcmp - function that compares two strings
 *@s1: first string to compare
 *@s2: second string to be compared
 *Return: if str1 < str2 return negative difference of first
 *if str1 == str2 return 0
 *if str1 > str2 return postive difference of first
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
