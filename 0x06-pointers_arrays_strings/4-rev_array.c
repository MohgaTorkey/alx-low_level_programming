#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers
 * @a: the array to be reversed
 * @n: elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int rev;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		rev = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = rev;
	}
}
