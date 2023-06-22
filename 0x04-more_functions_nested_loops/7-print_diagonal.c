#include "main.h"
/**
 * print_diagonal - a function that prints a diagonal line
 * @n: number of line
 * Return: 0 is successful
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
