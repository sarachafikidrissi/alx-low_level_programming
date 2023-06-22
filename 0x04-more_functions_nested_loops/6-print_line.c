#include "main.h"
/**
 * print_line - a function that prints _
 * @n: the _ that should be print
 * Return: 0 is successful
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
	else
		_putchar('\n');
}


