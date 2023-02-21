#include "main.h"

/**
 *
 *
 *
 *
 */

void times_table(void)
{
	int number = 9;
	int count = 1;
	
	while (count <= 10)
	{
		int product = number * count;
		_putchar(number '*' count '=' product);
		count = count + 1;
	}
}
