#include <stdio.h>
#include "main.h"
/**
 * main - print name of program
 * @agrc: count arguments
 * @arv: arry of argumrnts
 *
 * Return: 0
 */

int main(int agrc, char *argv[])
{
	int counr =0;

	if (argc > 0)
	{
		while (counr < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
