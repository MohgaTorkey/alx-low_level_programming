#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add function
 * @a: inputer first parameter
 * @b: input second parm
 *
 * Return : nothing
 */
int op_add(int  a, int b)
{
	return (a + b);
}

/**
 * op_sub  - subtraction
 * @a: first input
 * @b: second input
 *
 * Return: nothing
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: imput one
 * @b: input two
 *
 * Return:  mult
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide numbers
 * @a: first input
 * @b: second input
 *
 * Return: divided number
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder function
 * @a: first parm
 * @b: second parm
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Erroe\n");
		exit(100);
	}
	return (a % b);
}
