#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: the size of square
 * Return: 0 is successful
 */
void print_square(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
