#include <stdio.h>

/*
 *main: determine if a number is postive or negative or zero.
 *
 *Return: always 0 (Success)
 */

int main(void)
{
	int x;

	if (x > 0)
	{
		printf("%d is postive\n", x);
	}
	else if (x == 0)
	{
		printf("%d is zero\n", x);
	}
	else
	{
		printf("%d is negative\n", x);
	}
	return (0);
}
