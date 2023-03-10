#include <sdio.h>
#include "main.h"

/**
 * _putchar - write the character c to sdout
 * @c: the character to print
 *
 * Return: 1 on success
 * on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
