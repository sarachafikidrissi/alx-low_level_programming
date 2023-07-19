#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - a program that performs simple operation
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error");
		exit(99);
	}

	fptr = get_op_func(argv[2]);

	if (fptr == NULL)
	{
		printf("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", fptr(a, b));
	return (0);
}
