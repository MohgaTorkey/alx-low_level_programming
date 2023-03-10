#include <stdio.h>
#include "main.h"

/**
 * main -print argument number
 * @argc: argument number
 * *argv: argumnt array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
