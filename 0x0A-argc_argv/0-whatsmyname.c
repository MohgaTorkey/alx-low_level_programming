#include <stdio.h>

/**
 * main - print program name
 * @argc: number of arguments
 * @argv: arry of arrguments
 *
 * Return: 0
 */
int main(int argc _attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
