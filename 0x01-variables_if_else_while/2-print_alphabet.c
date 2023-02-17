#include <stdio.h>
/**
 * main - Print the alphabet in a lowercase followed by new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);
		putchar(lower_x);
	}
	return 0;
}
