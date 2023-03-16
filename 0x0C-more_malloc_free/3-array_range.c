#include "main.h"
#include <stdio.h>
#include <stlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: input min value
 * @max: input max value
 *
 * Return: newly created pointer
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);
}
