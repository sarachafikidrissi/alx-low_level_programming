#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function that adds 2 integers
 * @a: first integer
 * @b: second integer
 * Return: an integer where the result is stored
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that substract 2 integers
 * @a: first integer
 * @b: second integer
 * Return: an integer where the result is stored
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies 2 integers
 * @a: first integer
 * @b: second integer
 * Return: an integer where the result is stored
 */
int op_mul(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a * b);
}

/**
 * op_div - a function that divide 2 integers
 * @a: first integer
 * @b: second integer
 * Return: an integer where the result is stored
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a / b);
}

/**
 * op_mod - a function that calculates the modulo of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: an integer where the result is stored
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
