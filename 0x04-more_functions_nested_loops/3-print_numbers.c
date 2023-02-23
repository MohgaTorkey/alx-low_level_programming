#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58 ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
