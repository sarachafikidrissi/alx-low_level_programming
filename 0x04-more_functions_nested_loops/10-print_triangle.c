#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: the size of triangle
 * Return: 0 is successful
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (i + j <= size)
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
}
