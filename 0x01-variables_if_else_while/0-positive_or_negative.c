#include <stdio.h>

/* main - determine if a number is postive or negative or zero.
 *
 *Return: always 0 (Success)
 */
int main(void)
{
	int number;

	if (number > 0)
	{
		printf("%d is postive\n", number);
	}
	else if (number ==0)
	{
		printf("%d is zero\n", number);
	}
	else
	{
		printf("%d is negative\n", number);
	}
	return (0);
}
