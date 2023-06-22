#include "main.h"
/**
 * print_line - a function that prints _
 * @n: the _ that should be print
 * Return: 0 is successful
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
	for (; i <= n; i++)
		_putchar('_');
	}
	_putchar('\n');
}
