#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <type.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (! isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
