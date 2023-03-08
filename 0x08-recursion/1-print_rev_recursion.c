#include "main.h"

/**
 * _print_rev_recursion - print string reversed
 * @s: string to be reversed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}