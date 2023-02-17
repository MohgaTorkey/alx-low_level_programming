#include <stdio.h>

/**
 * main - print alphabets in lowercase then upper case followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for ((ch = 'a'); (ch <= 'z'); ch++)
		putchar(ch);

	for ((ch = 'A'); (ch <= 'Z'); ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
